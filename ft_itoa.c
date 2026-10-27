/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 02:11:25 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/24 02:11:29 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	convert_number(char *str, long nb, int len, int sign)
{
	int	i;

	str[len + sign] = '\0';
	i = len + sign - 1;
	while (i >= sign)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	if (sign)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;
	long	nb;

	nb = n;
	sign = (nb < 0);
	if (nb < 0)
		nb = -nb;
	len = count_digits(n);
	str = malloc(len + sign + 1);
	if (!str)
		return (NULL);
	convert_number(str, nb, len, sign);
	return (str);
}
