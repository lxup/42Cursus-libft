/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:22:35 by lquehec           #+#    #+#             */
/*   Updated: 2023/10/14 18:22:35 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_is_inside(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	i = 0;
	start = 0;
	while (s1[start] && ft_char_is_inside(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_is_inside(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>

// 	// printf("Original: %p\n", strjoin(5, 5));
// 	printf("Result: %s\n", ft_strtrim("yocoucouol", "yolo"));
// 	return (0);
// }