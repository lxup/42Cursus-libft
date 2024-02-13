/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:47:05 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 12:08:09 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	output_padding(t_struct *vars, int width_to_add, int prec_to_add, int fd)
{
	int	ret;

	ret = 0;
	while (!vars->dash && !vars->zero && width_to_add--)
		ret += write(fd, " ", 1);
	if (vars->is_pos && vars->plus)
		ret += write(fd, "+", 1);
	if (vars->is_neg)
		ret += write(fd, "-", 1);
	else if (vars->is_pos && vars->space)
		ret += write(fd, " ", 1);
	if (!vars->is_nul && vars->hash && vars->hex_low)
		ret += write(fd, "0x", 2);
	else if (!vars->is_nul && vars->hash && vars->hex_up)
		ret += write(fd, "0X", 2);
	while (vars->zero && width_to_add--)
		ret += write(fd, "0", 1);
	while (prec_to_add--)
		ret += write(fd, "0", 1);
	ret += write(fd, vars->string, vars->len);
	while (vars->dash && !vars->zero && width_to_add--)
		ret += write(fd, " ", 1);
	return (ret);
}

int	pad(t_struct *vars, int fd)
{
	int	prec_to_add;
	int	width_to_add;

	if (vars->is_str && vars->dot)
		vars->len = ft_min(vars->precision, vars->len);
	if (vars->dot)
		vars->zero = 0;
	prec_to_add = ft_max(0, vars->precision - vars->len);
	if (vars->is_str)
		prec_to_add = 0;
	width_to_add = vars->width - vars->len - prec_to_add;
	if (vars->is_pos || vars->is_neg)
		width_to_add--;
	if (vars->hash)
		width_to_add -= 2;
	width_to_add = ft_max(0, width_to_add);
	return (output_padding(vars, width_to_add, prec_to_add, fd));
}
