/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:50:37 by uclement          #+#    #+#             */
/*   Updated: 2022/12/09 11:45:38 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] < s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] > s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else if (s1[i] == '\0' || s2[i] == '\0')
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		else
			i++;
	}
	return (0);
}
