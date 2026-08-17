/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:06:28 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/17 21:03:03 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			del(lst->content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, current);
		lst = lst->next;
	}
	return (head);
}
