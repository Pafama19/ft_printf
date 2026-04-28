/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 11:26:13 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/10 12:03:04 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	len_s;
	size_t	counter;

	counter = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_calloc(1, 1));
	if (len_s - start < len)
		len = len_s - start;
	s2 = malloc(len + 1);
	if (!s2)
		return (NULL);
	while (counter < len)
	{
		s2[counter] = s[start + counter];
		counter++;
	}
	s2[counter] = '\0';
	return (s2);
}
