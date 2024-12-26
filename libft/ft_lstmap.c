/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:20:26 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/22 13:48:31 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*new_lst;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst == NULL)
		return (NULL);
	start = new_lst;
	lst = lst -> next;
	while (lst)
	{
		new_lst -> next = ft_lstnew(f(lst -> content));
		if (new_lst -> next == NULL)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		new_lst = new_lst -> next;
		lst = lst -> next;
	}
	new_lst -> next = NULL;
	return (start);
}
