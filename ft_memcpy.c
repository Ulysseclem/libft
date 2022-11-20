/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:37:00 by ulysse            #+#    #+#             */
/*   Updated: 2022/11/20 15:56:52 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char	*dest2;
	char	*src2;

	dest2 = ((char *)dest);
	src2 = ((char *)src);
	
	i = 0;
	while(dest2[i] && src2[i] && i < n)
	{
		src2[i] = dest2[i];
		i++;
	}
	dest2 [i] = '\0';
	
	return((void *)dest2);
}