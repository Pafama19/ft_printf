/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:58:09 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/07 20:23:47 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t dest_size)
{
	size_t	i;
	size_t	dest_len;
	size_t	source_len;

	i = 0;
	dest_len = ft_strlen(dest);
	source_len = ft_strlen(source);
	if (dest_size <= dest_len)
	{
		dest_len = dest_size;
		return (dest_size + source_len);
	}
	while ((source[i] != '\0') && (dest_len + i < dest_size - 1))
	{
		dest[dest_len + i] = source[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + source_len);
}
