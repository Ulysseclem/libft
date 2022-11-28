/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:39:01 by uclement          #+#    #+#             */
/*   Updated: 2022/11/28 12:42:50 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	to_search(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_start;
	int		i_end;
	char	*str;
	int		i;

	if (!s1)
		return (NULL);
	i_start = 0;
	while (to_search(s1[i_start], set) == 1)
		i_start++;
	i_end = ft_strlen(s1);
	while (i_end > i_start && to_search(s1[i_end - 1], set) == 1)
		i_end--;
	str = malloc(sizeof(char) * (i_end - i_start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i_start < i_end)
	{
		str[i] = s1[i_start];
		i++;
		i_start++;
	}
	str[i] = '\0';
	return (str);
}