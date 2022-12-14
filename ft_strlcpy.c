/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:59:32 by uclement          #+#    #+#             */
/*   Updated: 2022/11/22 16:50:39 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
