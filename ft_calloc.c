# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return(s);
}

void *ft_calloc(size_t nmemb, size_t size)
{
	char *p;

	p = malloc(nmemb * size);
	if (!p)
	{
		return NULL;
	}
	ft_memset(p,0,size);

	return(p);

	
}

int main()
{
	char *a;

	a = ft_calloc(4,5);
}
