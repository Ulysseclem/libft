/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:02:16 by ulysse            #+#    #+#             */
/*   Updated: 2022/12/13 17:04:55 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i= 0;
	if(!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++; 
	}
	write(fd, "\n", 1);
}