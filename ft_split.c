#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*ps2;
	size_t				i;

	i = 0;
	pdest = (unsigned char *)dest;
	ps2 = (const unsigned char *)src;
	while (i < n)
	{
		pdest[i] = ps2[i];
		i++;
	}
	return (dest);
}
char *free_memory(char **final, int j)
{
	while (j >= 0)
	{
		free(final[j]);
		j--;
	}
	free(final);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		word;
	int		length;
	int		j;

	j = 0;
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
		return (free_memory(final, j - 1));
	i = 0;
	while (s[i])
	{
		length = 0;
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			while (s[i] != c && s[i] != '\0')
			{
				length++;
				i++;
			}
			final[j] = malloc(sizeof(char) * (length + 1));
			if (!final[j])
				return (free_memory(final, j - 1));
			ft_memcpy(*(final + j), s + (i - length), length);
			final[j][length] = '\0';
			j++;
		}
		i++;
	}
	final[j] = NULL;
	return (final);
}

#include <stdio.h>

int	main(void)
{
	char **result = ft_split(",,,Hello,,,,World,,This,,,,Is,A,,,,Test,,,", ',');
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