
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	size_t	i;
	size_t	length;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	length = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (length > i && ft_strchr(set, s1[length - 1]))
		length--;
	length = length - i;
	final = malloc(sizeof(char) * (length + 1));
	if (!final)
		return (NULL);
	ft_memcpy(final, s1 + i, length);
	final[length] = '\0';
	return (final);
}
#include <stdio.h>

int	main(void)
{
	char *s1 = "----Hello-World----";
	char *set = "-";
	char *trimmed = ft_strtrim(s1, set);
	printf("Original: '%s'\n", s1);
	printf("Trimmed: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}