/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:58:43 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 12:03:28 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

# include "libft.h"

/*
** Return the absolute value of n
** ./math/ft_abs.c
*/
unsigned int	ft_abs(int n);

/*
** Return the minimum value between a and b
** ./math/ft_min.c
*/
int				ft_min(int a, int b);

/*
** Return the maximum value between a and b
** ./math/ft_max.c
*/
int				ft_max(int a, int b);

#endif