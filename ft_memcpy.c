/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:54:14 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/15 19:54:15 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
