/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printintdec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:49:43 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/05 19:48:09 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_writenum(int num)
{
	int		i;

	i = 0;
	if (num >= 10)
		i += ft_writenum(num / 10);
	i += ft_printchar((num % 10) + '0');
	return (i);
}

int	ft_printintdec(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count += ft_printchar('0');
	else if (num == -2147483648)
		count += ft_printstr("-2147483648");
	else if (num < 0)
	{
		count += ft_printchar('-');
		num = -num;
		count += ft_writenum(num);
	}
	else
		count += ft_writenum(num);
	return (count);
}
