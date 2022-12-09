/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:43:36 by uclement          #+#    #+#             */
/*   Updated: 2022/12/09 14:35:19 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

static int	sep(char str, char c)
{
	if (str == c)
		return (1);
	else
		return (0);
}

static int	counting(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*split_strdup(const char *s, int start, int end)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char) * (end - start + 1));
	if (!dest)
		return (NULL);
	while (start < end)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		count;
	int		i;
	int		start;
	int		x;

	start = 0;
	x = 0;
	i = 0;
	count = counting(s, c);
	tab = malloc(sizeof(char *) * count + 1);
		if (!tab)
		return (NULL);
	tab[count] = NULL;
	while (x < count)
	{
		while (sep(s[i], c) == 1)
			i++;
		start = i;
		while (sep(s[i], c) == 0)
			i++;
		tab[x] = split_strdup(s, start, i);
		x++;
	}
	return (tab);
}
