/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:12:34 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/10 10:54:02 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*reserve;
	size_t	bytes;

	bytes = count * size;
	reserve = malloc(bytes);
	if (!reserve)
	{
		return (NULL);
	}
	ft_bzero(reserve, bytes);
	return (reserve);
}
