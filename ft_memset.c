
#include "libft.h"

void *memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = (char)c;
		ptr++;
		n--;
	}
	return(s);
}