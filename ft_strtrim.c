
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *final;
    size_t i;
    size_t length;

    i = 0;
    
    if (!s1)
        return NULL;
    length = ft_strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    while (length > i && ft_strchr(set, s1[length - 1] ))
        length--;
    
    length = length - i;
    final = malloc(sizeof(char)*(length + 1));
    ft_memmove(final,s1);
}