/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:22:55 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/26 19:08:48 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*sr;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	dst = (char *)dest;
	sr = (char *)src;
	if (sr < dst)
	{
		i = n;
		while (i-- > 0)
		{
			dst[i] = sr[i];
		}
		return (dest);
	}
	ft_memcpy(dst, sr, n);
	return (dest);
}
