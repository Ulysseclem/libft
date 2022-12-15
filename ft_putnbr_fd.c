/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:05:54 by ulysse            #+#    #+#             */
/*   Updated: 2022/12/15 14:27:32 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
// int main ()
// {
// 	ft_putnbr_fd(-2147483648);
// }