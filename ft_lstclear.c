/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 13:11:33 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/24 13:26:25 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		cpy = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(cpy, del);
	}
}
