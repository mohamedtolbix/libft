/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:49:10 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/15 10:49:15 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*news;

	i = 0;
	news = (const unsigned char *)s;
	while (i < n)
	{
		if (news[i] == (unsigned char)c)
			return ((void *)(news + i));
		i++;
	}
	return (NULL);
}
