
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*ps2;
	size_t				i;

	if (!dest && !src)
		return NULL;
	i = 0;
	pdest = (unsigned char *)dest;
	ps2 = (const unsigned char *)src;
	if (pdest < ps2)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			pdest[i] = ps2[i];
		}
	}
	return (dest);
}
