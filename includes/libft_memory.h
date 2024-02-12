/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_memory.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:12:06 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 18:15:44 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEMORY_H
# define LIBFT_MEMORY_H

# include "libft.h"

/*
**	Set n bytes of s to 0.=
**	./memory/ft_bzero.c
*/
void	ft_bzero(void *s, size_t n);

/*
**	Malloc quantiy of type_size bytes.
**	./memory/ft_calloc.c
**	Return:
**	quantity mallocated of type_size bytes.
*/
void	*ft_calloc(size_t count, size_t size);

/*
**	Search for c in the first n bytes of s.
**	./memory/ft_memchr.c
**	Return:
**	(void *)pointer to the first occurence of c in s.
**	NULL if c is not found.
*/
void	*ft_memchr(const void *s, int c, size_t size);

/*
**	Compare n bytes of s1 and s2.
**	./memory/ft_memcmp.c
**	Return:
**	0 if s1 and s2 are identical.
**	< 0 if s1 is less than s2.
**	> 0 if s1 is greater than s2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t size);

/*
**	Copy n bytes from src to dest.
**	./memory/ft_memcpy.c
**	Return:
**	(void *)dest.
**	The (void *)dest (argument modified).
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/*
**	Move n bytes from src to dest.
**	./memory/ft_memmove.c
**	Return:
**	(void *)dest.
**	The (void *)dest (argument modified).
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/*
**	Set n bytes of target to char_to_set.
**	./memory/ft_memset.c
**	Return:
**	(void *)target.
**	The (void *)target (argument modified).
*/
void	*ft_memset(void *pointer, int value, size_t count);

#endif
