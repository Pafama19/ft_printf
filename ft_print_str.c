/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:39:59 by pabfajar          #+#    #+#             */
/*   Updated: 2026/04/26 17:54:00 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
