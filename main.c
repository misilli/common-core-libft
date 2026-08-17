#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	t_list *list = NULL;
	t_list *new_node = NULL;
	t_list *head = NULL;
	int i = 0;
	char str = 'A';
	char *pstr;

	while (i < 5)
	{
		pstr = malloc(sizeof(char) * 2);
		if (!pstr)
			return (1);
		pstr[0] = str;
		pstr[1] = '\0';
		new_node = ft_lstnew(pstr);
		ft_lstadd_back(&list, new_node);
		i++;
		str++;
	}
	head = list;
	i = 0;
	t_list *tmp = head;
	while (tmp)
	{
		printf("Node %d: %c\n", i, *(char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	t_list *m;
	m = ft_lstmap(head, (void *(*)(void *))ft_strdup, free);
	i = 0;
	tmp = m;
	while (tmp)
	{
		printf("Node %d: %c\n", i, *(char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	ft_lstclear(&m, free);
	ft_lstclear(&head, free);
	return (0);
}