/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:10:54 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 19:14:36 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECKER_H
# define LIBFT_CHECKER_H

# include "libft.h"

/*
**	Check if character c is whitespace.
**	./checker/ft_iswhitespace.c
*/
int	ft_iswhitespace(char c);

/*
**	Check if character c is lowercase.
**	./checker/ft_islowercase.c
*/
int	ft_islowercase(char c);

/*
**	Check if character c is uppercase.
**	./checker/ft_isuppercase.c
*/
int	ft_isuppercase(char c);

/*
**	Check if character c is alpha.
**	./checker/ft_isalpha.c
*/
int	ft_isalpha(int c);

/*
**	Check if character c is numeric.
**	./checker/ft_isdigit.c
*/
int	ft_isdigit(int c);

/*
**	Check if string str is a number string.
**	./checker/ft_isdigitstr.c
*/
int	ft_isdigitstr(char *str);

/*
**	Check if character c is alphanumeric.
**	./checker/ft_isalnum.c
*/
int	ft_isalnum(int c);

/*
**	Check if character c is printable.
**	./checker/ft_isprint.c
*/
int	ft_isprint(int c);

/*
**	Check if character c is ascii.
**	./checker/ft_isascii.c
*/
int	ft_isascii(int c);

#endif