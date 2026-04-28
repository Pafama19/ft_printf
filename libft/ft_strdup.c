/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 10:56:35 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/15 15:19:05 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	counter;
	size_t	str_len;

	counter = 0;
	str_len = ft_strlen(s1);
	dest = malloc(str_len + 1);
	if (!dest)
	{
		return (NULL);
	}
	while (s1[counter])
	{
		counter = s1[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
