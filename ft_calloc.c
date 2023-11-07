/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:01:09 by lquehec           #+#    #+#             */
/*   Updated: 2023/11/07 20:01:10 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*element;

	if ((int)size < 0 || (int)count < 0)
		return (NULL);
	element = (void *)malloc(count * size);
	if (!element)
		return (NULL);
	ft_bzero(element, (count * size));
	return (element);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>

// 	printf("Original: %p\n", calloc(5, 5));
// 	printf("Result: %p\n", ft_calloc(5, 5));
// 	return (0);
// }