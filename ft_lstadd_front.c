/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:03:14 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/22 23:22:24 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int    main(void)
// {
//     t_list    *a;
//     t_list    *b;
//     t_list    *c;

//     a = ft_lstnew("A");
//     b = ft_lstnew("B");
//     c = ft_lstnew("C");
//     if (!a || !b || !c)
//         return (1);
//     ft_lstadd_front(&a, b);
//     ft_lstadd_front(&a, c);
//     printf("List content: %s -> %s -> %s\n",
//         (char *)c->content,
//         (char *)b->content,
//         (char *)a->next->content);

//     free(c);
//     free(b);
//     free(a);
//     return (0);
// }
