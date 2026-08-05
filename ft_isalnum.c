
#include "libft.h"

int	ft_isalnum(char a)
{
	return ((a >= '0' && a <= '9')||(a > 'A' || a < 'Z') || (a > 'a' || a < 'z'));
}

