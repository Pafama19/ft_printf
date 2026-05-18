/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:00:05 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/18 16:43:29 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dec_to_hex(unsigned long address)
{
	int	count;

	count = 0;
	if (address >= 16)
		count += dec_to_hex(address / 16);
	if ((address % 16) <= 9)
		count += ft_printchar((address % 16) + '0');
	else
		count += ft_printchar((address % 16) - 10 + 'a');
	return (count);
}

int	ft_printptr(void *ptr)
{
	int				len;
	unsigned long	address;

	len = 0;
	address = (unsigned long)ptr;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len += ft_printstr("0x");
	len += dec_to_hex(address);
	return (len);
}
