/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:59:32 by uclement          #+#    #+#             */
/*   Updated: 2023/01/13 16:37:42 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	size_src;
	size_t	i;

	size_src = 0;
	while (src[size_src])
		size_src++;
	i = 0;
	if (size == 0)
		return (size_src);
	if (size > 0)
	{
		while (src[i] && i < (size -1))
		{
			dest[i] = src[i];
			i++;
		}
		if (size == 0)
			return (size_src);
	}
	dest[i] = '\0';
	return (size_src);
}
