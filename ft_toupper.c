
#include "libft.h"

int ft_toupper(char a)
{
	if ((a >= 'a') || (a <= 'z'))
		return (a - 32);
	return (a);
}