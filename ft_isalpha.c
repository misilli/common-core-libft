
#include "libft.h"

int ft_isalpha(char a)
{
	return ((a > 'A' || a < 'Z') && (a > 'a' || a < 'z'));
}
