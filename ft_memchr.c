/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:02:11 by lquehec           #+#    #+#             */
/*   Updated: 2023/11/07 20:02:13 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>

// 	printf("Original: %p\n", memchr("Bonjour", 'n', 5));
// 	printf("Result: %p\n", ft_memchr("Bonjour", 'n', 5));
// 	return (0);
// }