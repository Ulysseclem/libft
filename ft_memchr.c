/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:24:49 by ulysse            #+#    #+#             */
/*   Updated: 2023/01/15 13:06:30 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = ((unsigned char *) s);
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (((void *)s) + i);
		i++;
	}
	return (NULL);
}
