
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *p;

    i = 0;
    p = s;
    while (n > i)
    {
        if (p[i] == (unsigned char)c)
        {
            return((void *)&p[i]);
        }
        i++;
    }
    
    return NULL;

}