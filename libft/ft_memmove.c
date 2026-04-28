/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:47:31 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/15 15:24:19 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (dst == (void *)0 && src == (void *)0)
		return (0);
	if (d < s)
		ft_memcpy(dst, src, len);
	if (d > s)
	{
		while (0 < len--)
			d[len] = s[len];
	}
	return (dst);
}
