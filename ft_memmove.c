/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:53:02 by lquehec           #+#    #+#             */
/*   Updated: 2023/10/14 11:53:02 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	if (dest < src)
	{
		i = (size_t)n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + 1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + 1);
			i++;
		}
	}
	return (dest);
}
