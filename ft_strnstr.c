/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:43:21 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/17 20:45:35 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		while ((i + j) < len && big[i + j] == little[j] && big[i + j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
