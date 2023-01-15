/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:05:54 by ulysse            #+#    #+#             */
/*   Updated: 2023/01/15 13:27:10 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		nb;
	long int	ln;

	ln = (long int) n;
	if (ln < 0)
	{
		write(fd, "-", 1);
		ln *= -1;
	}
	if (ln >= 10)
	{
		nb = ln % 10 + '0';
		ft_putnbr_fd(ln / 10, fd);
		write (fd, &nb, 1);
	}
	else
	{
		ln = ln + '0';
		write(fd, &ln, 1);
	}
}
