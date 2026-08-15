/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumidill <mumidill@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:30:06 by mumidill          #+#    #+#             */
/*   Updated: 2026/08/15 19:30:15 by mumidill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int nbr)
{
	int	i;
	int	len;

	i = 10;
	len = 1;
	if (nbr < 0)
		len++;
	while (nbr != nbr % i)
	{
		len++;
		i = i * 10;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*box;
	long	n;
	int		i;

	n = nbr;
	i = ft_intlen(n);
	box = malloc(sizeof(char) * i + 1);
	if (!box)
		return (NULL);
	if (n < 0)
	{
		box[0] = '-';
		n = -1 * n;
	}
	if (n == 0)
		box[i] = '0';
	while (n > 0)
	{
		box[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (box);
}
