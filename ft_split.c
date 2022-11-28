/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:43:36 by uclement          #+#    #+#             */
/*   Updated: 2022/11/28 15:37:17 by uclement         ###   ########.fr       */
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

static int	counting(char const *s, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (sep(s[i], c) == sep(s[i +1], c))
			i++;
		else if (sep(s[i], c) == 1)
		{
			count++;
			i++;
		}
		else
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

	count = counting(s, c) + 1;
	printf("%d \n", count);

	tab = malloc(sizeof(char *) * count);
	while (x < count && s[i])
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