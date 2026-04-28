/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 19:42:11 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/13 19:46:40 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mod_str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	mod_str = malloc(ft_strlen(s) + 1);
	if (!mod_str)
		return (NULL);
	while (i < (unsigned int)ft_strlen(s))
	{
		mod_str[i] = f(i, s[i]);
		i++;
	}
	mod_str[i] = '\0';
	return (mod_str);
}
