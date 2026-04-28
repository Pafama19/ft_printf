/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 21:23:46 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/07 21:44:40 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_need;
	char	*hay;
	char	*need;
	size_t	ihay;
	size_t	ineed;

	ihay = 0;
	ineed = 0;
	len_need = ft_strlen((char *)needle);
	hay = (char *)haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (hay[ihay] != '\0' && len >= len_need + ihay)
	{
		need = (char *)needle;
		if (ft_strncmp(hay + ihay, need, len_need) == 0)
			return (hay + ihay);
		ihay++;
		ineed++;
	}
	return (NULL);
}
