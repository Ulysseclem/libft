/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:48:46 by ulysse            #+#    #+#             */
/*   Updated: 2023/01/13 16:36:46 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
			return (-1);
		else if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			return (1);
		else
			i++;
	}
	return (0);
}
