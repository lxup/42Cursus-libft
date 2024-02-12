/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:03:48 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 18:09:07 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolower(char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
	{
		str[i] = ft_lowercase_char(str[i]);
		i++;
	}
	return (str);
}
