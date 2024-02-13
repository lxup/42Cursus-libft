/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwhitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:03:52 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 21:04:03 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strwhitespace(char *str)
{
	int	i;

	i = -1;
	while (str && str[++i])
		if (!ft_iswhitespace(str[i]))
			return (0);
	return (1);
}
