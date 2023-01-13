/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:24:49 by ulysse            #+#    #+#             */
/*   Updated: 2023/01/13 16:36:48 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = ((char *) s);
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (((char *)s) + i);
		i++;
	}
	return (NULL);
}
