/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:45:00 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/17 20:06:44 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*aux_s;
	size_t	i;

	i = 0;
	aux_s = (char *)s;
	while (i < n)
	{
		if ((unsigned char)*aux_s == (unsigned char)c)
			return (aux_s);
		else
		{
			i++;
			aux_s++;
		}
	}
	return (NULL);
}
