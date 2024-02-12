/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fdnl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:58:42 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 17:13:26 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnchar_fdnl(int fd, char c, size_t n)
{
	ft_putnchar_fd(fd, c, n);
	ft_putchar_fd(fd, '\n');
	return (n + 1);
}
