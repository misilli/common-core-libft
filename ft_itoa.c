/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:06:34 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/16 18:08:23 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*box;
	long	n;
	int		len;

	n = nbr;
	len = ft_intlen(n);
	box = malloc(sizeof(char) * (len + 1));
	if (!box)
		return (NULL);
	box[len] = '\0';
	if (n < 0)
	{
		box[0] = '-';
		n = -n;
	}
	if (n == 0)
		box[0] = '0';
	while (n > 0)
	{
		box[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (box);
}
