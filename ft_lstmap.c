/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:06:28 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/21 17:32:35 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	void	*new_content;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
        current = ft_lstnew(new_content);
        if (!current)
        {
            del(new_content);
            ft_lstclear(&head, del);
            return (NULL);
        }
		ft_lstadd_back(&head, current);
		lst = lst->next;
	}
	return (head);
}
