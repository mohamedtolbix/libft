/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motolbix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:58:54 by motolbix          #+#    #+#             */
/*   Updated: 2026/10/26 19:12:31 by motolbix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	extfunction(char c, char const *s, size_t *i,
		size_t *len)
{
	while (s[*i] == c)
	{
		if (s[*i] == '\0')
			break ;
		(*i)++;
	}
	while (s[*i + *len] && s[*i + *len] != c)
		(*len)++;
}

static void	alloc(size_t wc, char ***array)
{
	*array = malloc((wc + 1) * sizeof(char *));
	if (!*array)
		return ;
}

static size_t	ft_wc(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wc;
	size_t	len;
	char	**array;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	wc = ft_wc(s, c);
	alloc(wc, &array);
	if (!array)
		return (NULL);
	while (s[i])
	{
		len = 0;
		extfunction(c, s, &i, &len);
		if (len > 0)
			array[j++] = ft_substr(s, i, len);
		i += len;
	}
	array[j] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("  count   count ree  ", ' ');
// 	if (!result)
// 		return (1);
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("result[%d] = \"%s\"\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }