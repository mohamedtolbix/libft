/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 01:14:51 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/24 02:14:54 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*news1;
	const unsigned char	*news2;

	news1 = (const unsigned char *)s1;
	news2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && news1[i] == news2[i])
		i++;
	if (i == n)
		return (0);
	return (news1[i] - news2[i]);
}
