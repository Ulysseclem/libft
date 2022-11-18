/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 09:50:37 by uclement          #+#    #+#             */
/*   Updated: 2022/11/18 10:29:59 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] < s2[i])
			return(s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return(s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}
