/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:31:05 by uclement          #+#    #+#             */
/*   Updated: 2022/11/16 15:02:02 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	char		*src1;
	size_t		i;

	dest1 = ((char *)dest);
	src1 = ((char *)src);
	i = 0;
	while (i < n)
	{
		src1[i] = dest1[i];
		i++;
	}
	return (dest);
}