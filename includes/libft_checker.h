/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:10:54 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 16:33:53 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECKER_H
# define LIBFT_CHECKER_H

# include "libft.h"

/*
**	Check if character c is whitespace.
**	./checker/ft_iswhitespace.c
*/
t_bool	ft_iswhitespace(char c);

/*
**	Check if character c is lowercase.
**	./checker/ft_islowercase.c
*/
t_bool	ft_islowercase(char c);

/*
**	Check if character c is uppercase.
**	./checker/ft_isuppercase.c
*/
t_bool	ft_isuppercase(char c);

/*
**	Check if character c is alpha.
**	./checker/ft_isalpha.c
*/
t_bool	ft_isalpha(int c);

/*
**	Check if character c is numeric.
**	./checker/ft_isdigit.c
*/
t_bool	ft_isdigit(int c);

/*
**	Check if string str is a number string.
**	./checker/ft_isdigitstr.c
*/
t_bool	ft_isdigitstr(char *str);

/*
**	Check if character c is alphanumeric.
**	./checker/ft_isalnum.c
*/
t_bool	ft_isalnum(int c);

/*
**	Check if character c is printable.
**	./checker/ft_isprint.c
*/
t_bool	ft_isprint(int c);

/*
**	Check if character c is ascii.
**	./checker/ft_isascii.c
*/
t_bool	ft_isascii(int c);

#endif