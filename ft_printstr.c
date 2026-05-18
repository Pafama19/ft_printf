/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:39:59 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/18 16:26:16 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
