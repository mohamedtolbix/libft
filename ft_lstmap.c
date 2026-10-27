/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:32:34 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/24 15:16:00 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*fun;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		fun = f(lst->content);
		new_node = ft_lstnew(fun);
		if (!new_node)
		{
			del(fun);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	*double_content(void *content)
// {
// 	int	*new_num;

// 	new_num = malloc(sizeof(int));
// 	if (!new_num)
// 		return (NULL);
// 	*new_num = (*(int *)content) * 2;
// 	return (new_num);
// }

// void	del_content(void *content)
// {
// 	free(content);
// }

// void	print_content(void *content)
// {
// 	printf("%d ", *(int *)content);
// }

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*new_list;

// 	a = ft_lstnew(NULL);
// 	b = ft_lstnew(NULL);
// 	c = ft_lstnew(NULL);
// 	if (!a || !b || !c)
// 		return (1);
// 	a->content = malloc(sizeof(int));
// 	b->content = malloc(sizeof(int));
// 	c->content = malloc(sizeof(int));
// 	if (!a->content || !b->content || !c->content)
// 		return (1);
// 	*(int *)a->content = 2;
// 	*(int *)b->content = 3;
// 	*(int *)c->content = 4;
// 	a->next = b;
// 	b->next = c;
// 	c->next = NULL;
// 	new_list = ft_lstmap(a, double_content, del_content);
// 	printf("Original: ");
// 	ft_lstiter(a, print_content);
// 	printf("\nMapped:   ");
// 	ft_lstiter(new_list, print_content);
// 	printf("\n");
// 	ft_lstclear(&a, del_content);
// 	ft_lstclear(&new_list, del_content);
// 	return (0);
// }