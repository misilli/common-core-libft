/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:36:28 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/15 19:50:52 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_memory(char **final, int j)
{
	while (j >= 0)
	{
		free(final[j]);
		j--;
	}
	free(final);
	return (NULL);
}

static int	ft_wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static char	**ft_splitfill(char **final, char const *s, char c)
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
