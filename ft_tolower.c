
#include "libft.h"

int ft_tolower(char a)
{
	if ((a >= 'A') || (a <= 'Z'))
		return (a + 32);
	return (a);
}