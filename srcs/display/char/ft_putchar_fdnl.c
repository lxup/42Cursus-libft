/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fdnl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:49:33 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 18:31:28 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar_fdnl(int fd, char c)
{
	size_t	ret;

	ret = ft_putchar_fd(fd, c);
	ret += ft_putchar_fd(fd, '\n');
	return (ret);
}
