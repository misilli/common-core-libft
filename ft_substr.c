
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *final;
	size_t i;
	size_t length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		len = 0;
	else if (len > length - start)
		len = length - start;
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	i = 0;
	while (i < len)
	{
		final[i] = s[start + i];
		i++;
	}
	final[i] = '\0';
	return (final);
}