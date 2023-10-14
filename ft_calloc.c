/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:51:44 by lquehec           #+#    #+#             */
/*   Updated: 2023/10/14 17:51:44 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*element;

	element = (void *)malloc(count * size);
	if (!element)
		return (NULL);
	ft_bzero(element, count);
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