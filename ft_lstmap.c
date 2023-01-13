/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:36:16 by uclement          #+#    #+#             */
/*   Updated: 2023/01/13 17:34:17 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void*))
{
	t_list	*new;
	t_list	*tmp;

	tmp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstdelone(tmp, del);
			tmp = NULL;
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (tmp);
}
