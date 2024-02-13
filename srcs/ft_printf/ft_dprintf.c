/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:46:05 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 13:11:11 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dprintf(const char *s, ...)
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
			ret += pad(&vars, 2);
			free(vars.string);
		}
		else
			ret += write(2, s, 1);
		s++;
	}
	va_end(vars.ap);
	return (ret);
}
