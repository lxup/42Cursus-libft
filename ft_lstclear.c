/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:22:48 by lquehec           #+#    #+#             */
/*   Updated: 2023/10/15 17:22:48 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*backup;

	if (!(*del) || !lst || !*lst)
		return ;
	backup = *lst;
	while (*lst && lst)
	{
		*lst = backup->next;
		ft_lstdelone(backup, (*del));
		backup = *lst;
	}
}
