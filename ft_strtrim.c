/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:38:54 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/15 19:38:55 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
