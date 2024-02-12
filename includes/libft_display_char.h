/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_char.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:10:47 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 17:11:51 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_CHAR_H
# define LIBFT_DISPLAY_CHAR_H

# include "libft.h"

/*
**	Print character c on file descriptor fd.
**	./display/char/ft_putchar_fd.c
*/
size_t	ft_putchar_fd(int fd, char c);

/*
**	Print character c on file descriptor fd followed by a new line.
**	./display/char/ft_putchar_fdnl.c
*/
size_t	ft_putchar_fdnl(int fd, char c);

/*
**	Print character c on standard output.
**	./display/char/ft_putchar.c
*/
size_t	ft_putchar(char c);

/*
**	Print character c on standard output followed by a new line.
**	./display/char/ft_putchar_nl.c
*/
size_t	ft_putchar_nl(char c);

/*
**	Print character c on error output.
**	./display/char/ft_putchar_err.c
*/
size_t	ft_putchar_err(char c);

/*
**	Print character c on error output followed by a new line.
**	./display/char/ft_putchar_errnl.c
*/
size_t	ft_putchar_errnl(char c);

/*
**	Print n c characters on file descriptor fd.
**	./display/char/ft_putnchar_fd.c
*/
size_t	ft_putnchar_fd(int fd, char c, size_t n);

/*
**	Print n c characters on file descriptor fd followed by a new line.
**	./display/char/ft_putnchar_fdnl.c
*/
size_t	ft_putnchar_fdnl(int fd, char c, size_t n);

/*
**	Print n c characters on standard output.
**	./display/char/ft_putnchar.c
*/
size_t	ft_putnchar(char c, size_t n);

/*
**	Print n c characters on standard output followed by a new line.
**	./display/char/ft_putnchar_nl.c
*/
size_t	ft_putnchar_nl(char c, size_t n);

/*
**	Print n c characters on error output.
**	./display/char/ft_putnchar_err.c
*/
size_t	ft_putnchar_err(char c, size_t n);

/*
**	Print n c characters on error output followed by a new line.
**	./display/char/ft_putnchar_errnl.c
*/
size_t	ft_putnchar_errnl(char c, size_t n);

#endif