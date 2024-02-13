/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_converter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:02:36 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 11:57:56 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONVERTER_H
# define LIBFT_CONVERTER_H

# include "libft.h"

/*
**	Convert string to int.
**	./converter/ft_atoi.c
*/
int		ft_atoi(const char *str);

/*
**	Convert int to string.
**	./converter/ft_itoa.c
*/
char	*ft_itoa(int n);

/*
**	Convert int to string with base.
**	./converter/ft_itoa_base.c
*/
char	*ft_itoa_base(unsigned long n, char *base);

/*
**	Convert lower case to upper case.
**	./converter/ft_toupper.c
*/
char	ft_uppercase_char(char c);

/*
**	Convert upper case to lower case.
**	./converter/ft_tolower.c
*/
char	ft_lowercase_char(char c);

#endif