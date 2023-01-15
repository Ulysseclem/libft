/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:37:26 by uclement          #+#    #+#             */
/*   Updated: 2023/01/15 12:25:24 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rev(char *str)
{
	long int		i;
	long int		j;
	char			tmp;

	i = 0;
	j = ft_strlen(str);
	while (i < j / 2)
	{
		tmp = str[i];
		str[i] = str[j - i - 1];
		str[j - i - 1] = tmp;
		i++;
	}
	return (str);
}

static int	count(long int n)
{
	long int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_modulo(long int n, char *str, int neg)
{
	int		i;
	char	temp;

	i = 0;
	if (n == 0)
	{
		str[i] = '0';
		i++;
	}
	while (n > 0)
	{
		temp = n % 10 + '0';
		str[i] = temp;
		n = n / 10;
		i++;
	}
	if (neg == -1)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int nb)
{
	char			*str;
	int				neg;
	long int		n;

	n = nb;
	neg = 1;
	str = malloc(sizeof(char) * (count(n) + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		neg = -1;
	}
	str = ft_modulo(n, str, neg);
	return (ft_rev(str));
}
