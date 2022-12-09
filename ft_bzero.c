/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:04:14 by uclement          #+#    #+#             */
/*   Updated: 2022/12/09 11:39:42 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, int len)
{
	int		i;
	char	*str1;

	str1 = ((char *) str);
	i = 0;
	while (i < len)
	{
		str1[i] = '\0';
		i++;
	}
}
