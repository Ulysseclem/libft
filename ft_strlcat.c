/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:44:15 by uclement          #+#    #+#             */
/*   Updated: 2022/11/22 17:04:54 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s_dest;
	size_t	i;
	size_t	s_src;

	s_src = 0;
	s_dest = 0;
	i = 0;
	if (dest == NULL && size == 0)
		return (0);
	while (src[s_src])
		s_src++;
	while (dest[s_dest])
		s_dest++;
	if (size == 0)
		return (s_src);
	else if (size <= s_dest)
		return (size + s_src);
	while (src[i] && (size - 1) > (i + s_dest))
	{
		dest[s_dest + i] = src[i];
		i++;
	}
	dest[s_dest + i] = '\0';
	return (s_src + s_dest);
}