/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:54:02 by uclement          #+#    #+#             */
/*   Updated: 2023/01/15 13:58:35 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!little[i])
		return ((char *) big);
	while (big[i] && len != 0)
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (little[j] == big[i + j] && big[i + j])
				j++;
			if ((i + j) > len)
				return (NULL);
			if (little[j] == '\0')
				return ((char *)(big + i));
			else
				i++;
		}
		else
			i++;
	}
	return (NULL);
}
