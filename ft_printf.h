/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:45:03 by pabfajar          #+#    #+#             */
/*   Updated: 2026/04/28 20:52:44 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *fixedarg, ...);
int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(void *ptr);

#endif