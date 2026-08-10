
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *final;
	size_t len1;
	size_t len2;

	if (!s1 || !s2)
		return (NULL);

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	final = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!final)
		return (NULL);
	ft_memmove(final , s1, len1);
	ft_memmove(final+ len1 , s2, len2);
	final[len1 + len2] = '\0';
	
	return (final);
}