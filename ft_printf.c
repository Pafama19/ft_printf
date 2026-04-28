/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 20:03:50 by pabfajar          #+#    #+#             */
/*   Updated: 2026/04/28 20:56:43 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose_flag(va_list arglist, const char flag)
{
	int	count;

	count = 0;
	if (flag == 'c')
		count += ft_print_char(va_arg(arglist, int));
	if (flag == 's')
		count += ft_print_str(va_arg(arglist, char *));
	if (flag == 'p')
		count += ft_print_ptr(va_arg(arglist, void *));
	//if (flag == 'i' || flag == 'd')
		//count += ft_print_int(va_arg(arglist, int));
	/*if (flag == 'u')
		count += ft_print_unsigneddec(va_arg(arglist, unsigned int));
	if (flag == 'x' || flag == 'X')
		count += ft_print_hex(va_arg(arglist, int), flag);
	if (flag == '%')
		count += ft_print_char('%');*/
	return (count);
}

int	ft_printf(char const *fixedarg, ...)
{
	int		i;
	int		total;
	va_list	arglist;

	i = 0;
	total = 0;
	va_start(arglist, fixedarg);
	if (!fixedarg)
		return (-1);
	while (fixedarg[i])
	{
		if (fixedarg[i] == '%' && fixedarg[i + 1])
		{
			total += ft_choose_flag(arglist, fixedarg[i + 1]);
			i++;
		}
		else
		{
			total += write(1, &fixedarg[i], 1);
		}
		i++;
	}
	va_end (arglist);
	return (total);
}
int	main(void)
{
	int	x;

	x = 42;
	ft_printf("=== Pruebas de ft_printf ===\n");
	ft_printf("Se va a imprimir un carácter: %c\n", 'd');
	ft_printf("Se va a imprimir un string: %s\n", "El señor de los anillos");
	ft_printf("Se va a imprimir un puntero: %p\n", (void *)&x);

	return (0);
}