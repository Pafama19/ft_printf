/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigneddec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:18:12 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/05 19:48:18 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_writeunsignednum(unsigned int num)
{
	int	counter;

	counter = 0;
	if (num >= 10)
		counter += ft_writeunsignednum(num / 10);
	counter += ft_printchar((num % 10) + '0');
	return (counter);
}

int	ft_printunsigneddec(unsigned int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count += ft_printchar('0');
	else
		count += ft_writeunsignednum(num);
	return (count);
}
