/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:46:48 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 11:46:50 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_string(char *s, t_struct *vars)
{
	vars->is_str = 1;
	if (!s)
	{
		if (vars->dot && vars->precision < (int)ft_strlen("(null)"))
			vars->string = ft_strdup("");
		else
			vars->string = ft_strdup("(null)");
	}
	else
		vars->string = ft_strdup(s);
	if (!vars->string)
		return (-1);
	vars->len = ft_strlen(vars->string);
	return (0);
}

int	handle_ptr(size_t ptr, t_struct *vars)
{
	if (!ptr)
	{
		vars->string = ft_strdup("(nil)");
	}
	else
	{
		vars->hash = 1;
		vars->string = ft_itoa_base(ptr, HEX_LOW);
		vars->hex_low = 1;
	}
	if (!vars->string)
		return (-1);
	vars->len = ft_strlen(vars->string);
	return (0);
}

int	handle_int(int n, t_struct *vars)
{
	if (n < 0)
		vars->is_neg = 1;
	else if (vars->space || vars->plus)
		vars->is_pos = 1;
	vars->string = ft_itoa_base(ft_abs(n), DEC);
	if (!vars->string)
		return (-1);
	vars->len = ft_strlen(vars->string);
	if (!vars->dot)
		vars->precision = 1;
	if (!n && vars->precision == 0)
		vars->len = 0;
	return (0);
}

int	handle_unsigned(unsigned int n, t_struct *vars, char *base)
{
	vars->string = ft_itoa_base(n, base);
	if (!vars->string)
		return (-1);
	vars->len = ft_strlen(vars->string);
	if (!vars->dot)
		vars->precision = 1;
	if (n == 0)
	{
		vars->is_nul = 1;
		if (vars->precision == 0)
			vars->len = 0;
	}
	return (0);
}
