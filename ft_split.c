/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:47:00 by lquehec           #+#    #+#             */
/*   Updated: 2023/10/14 18:47:00 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word_len(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_count_word(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **strs, int j)
{
	while (j > 0)
	{
		free(strs[j]);
		j--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_len;
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		word_len = 0;
		while (*s == c && *s)
			s++;
		word_len = ft_count_word_len(s, c);
		if (word_len)
		{
			strs[i] = ft_substr(s, 0, word_len);
			if (!strs[i])
				return (ft_free(strs, i));
			i++;
		}
		s += word_len;
	}
	strs[i] = 0;
	return (strs);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	char	str[] = "bonjour les amis vous allez bien ?";
// 	//char	str[] = "-";
// 	char	**result;
// 	int	i;

// 	result = ft_split(str, ' ');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("Index %d : %s\n", i, result[i]);
// 		i++;
// 	}
// 	//printf("OUTPUT% %s\n", result[1]);
// 	return (0);
// }