/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_intdec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:49:43 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/05 11:07:52 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	writenum(int num)
{
	int		i;

	i = 0;
	if (num >= 10)
		i += writenum(num / 10);
	i += ft_print_char((num % 10) + '0');
	return (i);
}

int	ft_print_intdec(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		count += ft_print_char('0');
	else if (num == -2147483648)
		count += ft_print_str("-2147483648");
	else if (num < 0)
	{
		count += ft_print_char('-');
		num = -num;
		count += writenum(num);
	}
	else
	{
		count += writenum(num);
	}
	return (count);
}
