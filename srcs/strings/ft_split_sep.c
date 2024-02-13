/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_sep.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:02:52 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 15:40:23 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char *charset, char *sep)
{
	size_t	str_len;
	int		word_counter;
	size_t	i;

	str_len = ft_strlen(str);
	word_counter = 0;
	i = 0;
	while (i < str_len)
	{
		while (i < str_len && ft_contains_char(charset, str[i]))
			i++;
		if (i < str_len)
			word_counter++;
		else
			continue ;
		while (i < str_len && !ft_contains_char(charset, str[i]))
			i++;
	}
	return (word_counter);
}

static void	fill_words(char *str, char *charset, char **result)
{
	size_t	str_len;
	int		word_counter;
	size_t	i;
	size_t	temp;

	str_len = ft_strlen(str);
	word_counter = 0;
	i = 0;
	while (i < str_len)
	{
		while (i < str_len && ft_contains_char(charset, str[i]))
			i++;
		if (i < str_len)
		{
			temp = i;
			word_counter++;
		}
		else
			continue ;
		while (i < str_len && !ft_contains_char(charset, str[i]))
			i++;
		result[word_counter - 1] = ft_strndup(&str[temp], i - temp, 0);
	}
}

char	**ft_split_sep(char *s, char *charset, char *sep)
{
	char	**result;
	int		word_counter;

	if (s == NULL || charset == NULL)
		return (NULL);
	result = NULL;
	word_counter = count_words(s, charset, sep);
	result = ft_calloc(word_counter + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	fill_words(s, charset, sep, result);
	result[word_counter] = NULL;
	return (result);
}
