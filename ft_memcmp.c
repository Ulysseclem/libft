/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 14:48:46 by ulysse            #+#    #+#             */
/*   Updated: 2022/11/20 15:15:35 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;
	
	str1 = ((char *)s1);
	str2 = ((char *)s2);
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] < str2[i])
			return(-1);
		else if (str1[i] > str2[i])
			return(1);
		else
			i++;
	}
	return (0);
}