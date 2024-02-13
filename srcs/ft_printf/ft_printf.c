/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:46:05 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 13:11:20 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_flags(const char **s, t_struct *vars)
{
	printf_init(vars);
	while (ft_strchr(FLAGS, **s))
		setflag(*(*s)++, vars);
	if (**s == '*')
	{
		vars->width = va_arg(vars->ap, int);
		(*s)++;
	}
	else
		vars->width = ft_atoi(*s);
	while (ft_isdigit(**s))
		(*s)++;
	if (**s == '.')
	{
		vars->dot = 1;
		if (*(++*s) == '*' && (*s)++)
			vars->precision = va_arg(vars->ap, int);
		else
			vars->precision = ft_atoi(*s);
		if (vars->precision < 0)
			vars->precision = 1;
		while (ft_isdigit(**s))
			(*s)++;
	}
}

int	get_spec(t_struct *vars)
{
	if (vars->specifier == 's')
		return (handle_string(va_arg(vars->ap, char *), vars));
	else if (vars->specifier == 'p')
		return (handle_ptr(va_arg(vars->ap, size_t), vars));
	else if (vars->specifier == 'd' || vars->specifier == 'i')
		return (handle_int(va_arg(vars->ap, int), vars));
	else if (vars->specifier == 'u')
		return (handle_unsigned(va_arg(vars->ap, unsigned int), vars, DEC));
	else if (vars->specifier == 'x' && ++vars->hex_low)
		return (handle_unsigned(va_arg(vars->ap, unsigned int), vars, HEX_LOW));
	else if (vars->specifier == 'X' && ++vars->hex_up)
		return (handle_unsigned(va_arg(vars->ap, unsigned int), vars, HEX_UP));
	else if (vars->specifier == '%' && ++vars->percent)
		vars->string = ft_strdup("%");
	else if (vars->specifier == 'c')
		vars->string = ft_strdup((char []){va_arg(vars->ap, int), 0});
	if (!vars->string)
		return (-1);
	vars->len = 1;
	return (0);
}

int	ft_printf(const char *s, ...)
{
	t_struct	vars;
	int			ret;

	va_start(vars.ap, s);
	ret = 0;
	if (!s)
		return (-1);
	while (*s)
	{
		if (*s == '%' && ++s)
		{
			parse_flags(&s, &vars);
			vars.specifier = *s;
			if (get_spec(&vars) == -1)
				return (-1);
			ret += pad(&vars, 1);
			free(vars.string);
		}
		else
			ret += write(1, s, 1);
		s++;
	}
	va_end(vars.ap);
	return (ret);
}
