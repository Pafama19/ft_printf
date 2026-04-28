/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 18:45:58 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/15 15:55:45 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	counter;
	size_t	num_words;

	counter = 0;
	num_words = 0;
	while (s[counter])
	{
		while (s[counter] == c)
			counter++;
		num_words++;
		while (s[counter] && s[counter] != c)
			counter++;
	}
	return (num_words);
}

static size_t	len_word(char const *s, char c)
{
	size_t	counter;
	size_t	length;

	counter = 0;
	length = 0;
	while (s[counter] && s[counter] != c)
	{
		length++;
	}
	return (length);
}

static char	*get_word(char const *s, char c, size_t	*ind)
{
	size_t	len;
	char	*act_word;

	while (s[*ind] && s[*ind] == c)
		(*ind)++;
	len = len_word(s + *ind, c);
	act_word = malloc(len * sizeof(char) + 1);
	if (!act_word)
		return (NULL);
	ft_memcpy(act_word, s + *ind, len);
	*ind += len;
	return (act_word);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	words;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = count_words(s, c);
	list = malloc(words * sizeof(char *) + 1);
	if (!list)
		return (NULL);
	while (s[i] && j < words)
	{
		list[j] = get_word(s, c, &i);
		j++;
	}
	list[words] = NULL;
	return (list);
}
