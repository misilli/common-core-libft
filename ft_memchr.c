
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (const unsigned char *)s;
	while (n > i)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(&p[i]));
		}
		i++;
	}
	return (NULL);
}
#include <stdio.h>
int	main(void)
{
	char p[] = "abcd";

	char *z = ft_memchr(p, 'b', 3);
	printf("%s", z);

	return (0);
}