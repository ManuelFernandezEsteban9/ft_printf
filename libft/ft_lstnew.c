/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:44:22 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/19 20:14:42 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof (t_list));
	if (new_node != NULL)
	{
		new_node -> content = content;
		new_node -> next = NULL;
		return (new_node);
	}
	else
		return (NULL);
}
/*
int	main(void)
{
	return (0);
}
*/