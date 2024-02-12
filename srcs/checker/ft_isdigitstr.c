/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigitstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:21:34 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 19:14:09 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigitstr(char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (i);
	while (str[i] && (str[i] == '-' || str[i] == '+'))
		i++;
	if (i == ft_strlen(str))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
