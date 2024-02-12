/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:55:45 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 17:13:08 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnchar_fd(int fd, char c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd(fd, c);
		i++;
	}
	return (n);
}
