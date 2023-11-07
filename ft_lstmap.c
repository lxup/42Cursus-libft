/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <lquehec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:02:00 by lquehec           #+#    #+#             */
/*   Updated: 2023/11/07 20:02:01 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*current;

	if (!lst || !f || !(*del))
		return (NULL);
	begin = ft_lstnew((*f)(lst->content));
	if (!begin)
		return (NULL);
	current = begin;
	lst = lst->next;
	while (lst)
	{
		current->next = ft_lstnew((*f)(lst->content));
		if (!current->next)
		{
			ft_lstclear(&begin, (*del));
			return (NULL);
		}
		current = current->next;
		lst = lst->next;
	}
	return (begin);
}
