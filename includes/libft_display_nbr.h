/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_nbr.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:26:08 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 17:27:28 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_NBR_H
# define LIBFT_DISPLAY_NBR_H

# include "libft.h"

/*
**	Print int on file descriptor fd.
**	./display/nbr/ft_putnbr_fd.c
*/
size_t	ft_putnbr_fd(int fd, int n);

/*
**	Print int on standard output.
**	./display/nbr/int/ft_puti.c
*/
size_t	ft_putnbr(int n);

#endif