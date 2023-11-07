/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:02:57 by lquehec           #+#    #+#             */
/*   Updated: 2023/11/07 20:02:58 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)searchedChar)
			return ((char *)(string + i));
		i++;
	}
	if (string[i] == (char)searchedChar)
		return ((char *)(string + i));
	return (NULL);
}

// int	main(void)
// {
// 	#include <stdio.h>

// 	printf("Result: %s\n", ft_strchr("Bonjour salut les gars", 'a'));
// 	return (0);
// }
