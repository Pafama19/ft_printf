/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 17:37:56 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/15 15:54:49 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	left(char const *s1, char const *set)
{
	size_t	countleft;

	countleft = 0;
	while (s1[countleft] && ft_strchr(set, s1[countleft]))
		countleft++;
	return (countleft);
}

size_t	right(char const *s1, char const *set)
{
	size_t	countright;

	countright = ft_strlen(s1) - 1;
	while (s1[countright] && ft_strchr(set, s1[countright]))
		countright--;
	return (countright);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count_left;
	size_t	count_right;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	count_left = left(s1, set);
	count_right = right(s1, set);
	len = count_right - count_left + 1;
	return (ft_substr(s1, count_left, len));
}
