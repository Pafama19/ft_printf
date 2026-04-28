/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 20:02:53 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/07 21:07:50 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;
	const char	*aux;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			aux = &str[i];
			return ((char *)aux);
		}
		i++;
	}
	if (str[i] == (char)c)
	{
		aux = &str[i];
		return ((char *)aux);
	}
	return (NULL);
}
