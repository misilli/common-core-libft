#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char	**free_memory(char **final, int j)
{
	while (j >= 0)
	{
		free(final[j]);
		j--;
	}
	free(final);
	return (NULL);
}
int	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (i + 1 < size && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		j++;
	}
	return (j);
}
char	**ft_splitfill(char **final, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			k = ft_wordlen(s + i, c);
			final[j] = malloc(sizeof(char) * (k + 1));
			if (!final[j])
				return (free_memory(final, j - 1));
			ft_strlcpy(final[j++], s + i, k + 1);
			i = i + k;
		}
		else
			i++;
	}
	final[j] = NULL;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word++;
		i++;
	}
	final = malloc(sizeof(char *) * (word + 1));
	if (!final)
		return (NULL);
	return (ft_splitfill(final, s, c));
}

#include <stdio.h>

int	main(void)
{
	char **result = ft_split(",,,Hello,,,,World,,This,,,,Is,A,,,,tTest,,", ',');
	int i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}