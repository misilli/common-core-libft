
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *test;

	test = malloc(sizeof(t_list));
	if (!test)
		return (NULL);

	test->content = content;
	test->next = NULL;

	return (test);
}