/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 19:50:51 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/05 21:36:48 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_writehex(unsigned int num, char flag)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_writehex(num / 16, flag);
	if ((num % 16) <= 9)
		count += ft_printchar((num % 16) + '0');
	else if ((num % 16) > 9 && flag == 'x')
		count += ft_printchar((num % 16) - 10 + 'a');
	else if ((num % 16) > 9 && flag == 'X')
		count += ft_printchar((num % 16) - 10 + 'A');
	return (count);
}

int	ft_printhexnum(unsigned int num, char flag)
{
	int	count;

	count = 0;
	if (num == 0)
		count += ft_printchar('0');
	else
		count += ft_writehex(num, flag);
	return (count);
}
