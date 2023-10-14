/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:17:38 by lquehec           #+#    #+#             */
/*   Updated: 2023/10/14 12:17:38 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	j = 0;
	if (dest_len < (size - 1) && size > 0)
	{
		while (src[i] && (dest_len + i) < (size - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = 0;
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

// int main() {
// 	#include <stdio.h>

//     char dest[20] = "Hello, ";
//     const char *src = "world!";
//     size_t size = sizeof(dest);

//     size_t result = ft_strlcat(dest, src, size);

//     printf("Concatenated String: %s\n", dest);
//     printf("Result: %zu\n", result);

//     return 0;
// }