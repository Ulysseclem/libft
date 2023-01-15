/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:43:36 by uclement          #+#    #+#             */
/*   Updated: 2023/01/15 13:39:36 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static int	ft_count(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (j);
}

static char	*ft_cut(char const *s, int i, char c)
{
	char	*str;
	int		k;

	k = 0;
	str = malloc(ft_size(&s[i], c) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s[i] != c && s[i])
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

void	*ft_free(char **str, int n)
{
	while (n >= 0)
	{
		free(str[n]);
		n--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while ((size_t)i < ft_strlen(s))
	{
		if (s[i] != c && s[i])
		{
			str[j] = ft_cut(s, i, c);
			if (!str[j])
				return (ft_free(str, j));
			i = i + ft_strlen(str[j]);
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
