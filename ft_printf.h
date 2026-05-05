/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:45:03 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/05 10:36:13 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *fixedarg, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(void *ptr);
int ft_print_intdec(int num);

#endif