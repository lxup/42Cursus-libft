/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:01:00 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/22 20:14:49 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	int		i;
	long	sign;
	long	nb;

	i = 0;
	nb = 0L;
	sign = 1L;
	if (str == NULL)
		return (nb);
	while (ft_iswhitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1L;
	while (ft_isdigit(str[i]))
		nb = nb * 10 + str[i++] - '0';
	return (nb * sign);
}
