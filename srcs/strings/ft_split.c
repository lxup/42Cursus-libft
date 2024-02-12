/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:02:52 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 18:25:22 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word_len(char const *str, char *charset)
{
	int	i;

	i = 0;
	while (str && str[i] && !ft_strchr(charset, str[i]))
		i++;
	return (i);
}

static int	ft_count_word(char const *s, char *charset)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		if (!ft_strchr(charset, s[i]))
		{
			count++;
			while (s && ft_strchr(charset, s[i]) && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_free(char **strs, int i)
{
	while (i > 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char *charset)
{
	int		i;
	int		word_len;
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * (ft_count_word(s, charset) + 1));
	if (!strs || !s)
		return (ft_free(strs, 0));
	i = 0;
	while (*s)
	{
		word_len = 0;
		while (*s && ft_strchr(charset, *s))
			s++;
		word_len = ft_count_word_len(s, charset);
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
