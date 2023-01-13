/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:40:20 by uclement          #+#    #+#             */
/*   Updated: 2023/01/13 16:37:18 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
