/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfajardo <pfajardo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 19:29:23 by pfajardo          #+#    #+#             */
/*   Updated: 2025/12/14 19:35:26 by pfajardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*actual;

	if (!lst)
		return ;
	while (*lst)
	{
		actual = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = actual;
	}
	*lst = NULL;
}
