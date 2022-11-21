/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:54:02 by uclement          #+#    #+#             */
/*   Updated: 2022/11/21 17:03:54 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (!little[i] || len == 0)
		return ((char *) big);
	while (big[i] && len > i)
	{
		j = 0;
		if (little[i] == big[i])
		{
			while (little[j] == big[i + j] && big[i + j])
				j++;
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