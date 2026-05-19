/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabfajar <pabfajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:45:03 by pabfajar          #+#    #+#             */
/*   Updated: 2026/05/19 09:06:28 by pabfajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *fixedarg, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printptr(void *ptr);
int	ft_printintdec(int num);
int	ft_printunsigneddec(unsigned int num);
int	ft_printhexnum(unsigned int num, char flag);

#endif