/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:03:50 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 17:15:14 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fdnl(int fd, char *str)
{
	size_t	len;

	len = ft_putstr_fd(fd, str);
	ft_putchar_fd(fd, '\n');
	return (len + 1);
}
