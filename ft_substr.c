
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *final;
	size_t i;
	size_t length;
	if (!s)
		return (NULL);

	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);

	length = ft_strlen(s);

	i = 0;
	if (length < start)
	{
		final[0] = '\0';
		return (final);
	}
	if (len > length - start)
		len = length - start;

	while (i < len)
	{
		final[i] = s[start + i];
		i++;
	}
	final[i] = '\0';
	return (final);
}