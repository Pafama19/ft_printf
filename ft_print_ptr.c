/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:00:05 by pabfajar          #+#    #+#             */
/*   Updated: 2026/04/28 18:09:38 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	dec_to_hex(unsigned long address)
{
	if (address <=16)
	dec_to_hex(address/16);
	
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	address;
	
	address = (unsigned long)ptr;
	
}