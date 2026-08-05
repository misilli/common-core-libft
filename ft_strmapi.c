#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    int i;

    i = 0;
    str = malloc(sizeof(char)*(strlen(s)+1));
    while (s[i] != '\0')
    {
        str[i] = f(i,s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
    
    
}
#include <stdio.h>
char ft_empty(unsigned int i, char a)
{
    printf("%d - %c\n" ,i ,a);
    return (a+32);
}

int main()
{
    char *z = "ABX";
    char *o = ft_strmapi( z ,&ft_empty);
    printf("%s\n    ", o);
}
