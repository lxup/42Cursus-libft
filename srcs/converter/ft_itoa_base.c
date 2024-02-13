/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:57:33 by lquehec           #+#    #+#             */
/*   Updated: 2024/02/13 12:03:43 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned long n, char *base)
{
	unsigned long	nb;
	size_t			len;
	int				base_len;
	char			*ret;

	nb = n;
	len = n == 0;
	base_len = ft_strlen(base);
	while (n && ++len)
		n /= ft_strlen(base);
	ret = ft_calloc(len + 1, 1);
	if (!ret)
		return (NULL);
	*ret = *base;
	while (nb)
	{
		ret[--len] = base[nb % base_len];
		nb /= base_len;
	}
	return (ret);
}
