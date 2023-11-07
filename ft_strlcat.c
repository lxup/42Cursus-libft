/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:03:12 by lquehec           #+#    #+#             */
/*   Updated: 2023/11/07 20:03:13 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	if ((dest == NULL || src == NULL) && !size)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size < dest_len + 1)
		return (size + src_len);
	else if (size > dest_len + 1)
	{
		while (src[i] && (dest_len + i) < (size - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	}
	dest[dest_len + i] = 0;
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