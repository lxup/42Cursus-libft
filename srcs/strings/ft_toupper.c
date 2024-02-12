/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:03:52 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 18:09:23 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_toupper(char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
	{
		str[i] = ft_uppercase_char(str[i]);
		i++;
	}
	return (str);
}
