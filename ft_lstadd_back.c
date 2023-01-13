/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:31:06 by uclement          #+#    #+#             */
/*   Updated: 2023/01/13 16:18:07 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*test;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	test = ft_lstlast(*lst);
	test->next = new;
}