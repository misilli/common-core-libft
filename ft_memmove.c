

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{

}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char			*pdest;
    const unsigned char		*ps2;
    size_t					i;

    i = 0;
    pdest = (unsigned char *)dest;
    ps2 = (const unsigned char *)src;
    while (i < n)
    {
        pdest[i] = ps2[i];
        i++;
    }
    return (dest);
}