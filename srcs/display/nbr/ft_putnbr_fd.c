/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 17:19:56 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/12 17:25:31 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int fd, int n)
{
	size_t	len;
	long	nbr;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		ft_putchar_fd(fd, '-');
		nbr *= -1;
		len++;
	}
	if (nbr / 10 != 0)
		len += ft_putnbr_fd(fd, nbr / 10);
	len += ft_putchar_fd(fd, nbr % 10 + '0');
	return (len);
}
