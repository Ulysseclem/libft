/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:38:22 by uclement          #+#    #+#             */
/*   Updated: 2023/01/13 16:43:53 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t		i;
	char		*str1;

	str1 = ((char *) str);
	i = 0;
	while (i < len)
	{
		str1[i] = c;
		i++;
	}
	return (str1);
}
