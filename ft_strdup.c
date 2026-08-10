
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *final;
	size_t len;

	len = ft_strlen(s);

	if (!s)
		return (NULL);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);

	ft_memmove(final, s, len);
	final[len] = '\0';

	return (final);
}