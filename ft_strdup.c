/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:55:38 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/15 19:56:04 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*final;
	size_t	len;

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
