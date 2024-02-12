/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_strings.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:52:28 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 18:32:09 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRINGS_H
# define LIBFT_STRINGS_H

# include "libft.h"

/*
**	Split string char *str on every char contained in string char *charset.
**	./strings/ft_split.c
*/
char	**ft_split(char const *s, char *charset);

/*
**	Return the first occurence of searchedChar in string.
**	./strings/ft_strchr.c
*/
char	*ft_strchr(const char *string, int searchedChar);

/*
**	Return a pointer to a new string which is a duplicate of the string s.
**	./strings/ft_strdup.c
*/
char	*ft_strdup(const char *s1);

/*
**	Apply the function f to each character of the string passed as argument.
**	./strings/ft_striter.c
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
**	Join s1 and s2 in a new string.
**	./strings/ft_strjoin.c
*/
char	*ft_strjoin(char const *s1, char const *s2);

/*
**	Return the length of the string.
**	./strings/ft_strlen.c
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size);

/*
**	Copy string src to dest.
**	./strings/ft_strlcpy.c
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

/*
**	Concatenate string src to dest.
**	./strings/ft_strlcat.c
*/
size_t	ft_strlen(const char *s);

/*
**	Apply the function f to each character of the string passed as argument.
**	./strings/ft_strmapi.c
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
**	Compare the two strings s1 and s2.
**	./strings/ft_strncmp.c
*/
int		ft_strncmp(const char *s1, const char *s2, size_t len);

/*
**	Locate the first occurrence of the null-terminated string little in the
**	null-terminated string big.
**	./strings/ft_strnstr.c
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/*
**	Locate the first occurrence of the null-terminated string little in the
**	null-terminated string big.
**	./strings/ft_strnstr.c
*/
char	*ft_strrchr(const char *string, int searchedChar);

/*
**	Allocate (with malloc(3)) and return a new string, which is the result of
**	the concatenation of ’s1’ and ’s2’.
**	./strings/ft_strjoin.c
*/
char	*ft_strtrim(char const *s1, char const *set);

/*
**	Allocate (with malloc(3)) and return a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
**	./strings/ft_substr.c
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
**	Converts a string to lowercase.
**	./strings/ft_tolower.c
*/
char	*ft_tolower(char *str);

/*
**	Converts a string to uppercase.
**	./strings/ft_toupper.c
*/
char	*ft_toupper(char *str);

#endif