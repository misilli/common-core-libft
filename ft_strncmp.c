# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char    *pdest;
    const unsigned char    *ps2;
    size_t                i;

    i = 0;
    pdest = (unsigned char *)dest;
    ps2 = (const unsigned char *)src;
    while (i < n)
    {
        *pdest++ = *ps2++;
        i++;
    }
    return (0);
}

int main() 
{
  char *p = "abcd";
  
  ft_memcpy(p,"zen",3 );

  
  return 0;
}