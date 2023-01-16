/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:44:15 by uclement          #+#    #+#             */
/*   Updated: 2023/01/16 11:11:30 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && len + 1 < size)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
