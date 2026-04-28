/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 19:00:35 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/15 16:57:11 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits++;
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nbr_digits;

	nbr_digits = count_digits(n);
	str = malloc(nbr_digits * sizeof(char) + 1);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!str)
		return (NULL);
	str[nbr_digits] = '\0';
	if (n == 0)
		str[--nbr_digits] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[--nbr_digits] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
