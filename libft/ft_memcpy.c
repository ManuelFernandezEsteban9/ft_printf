/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:21:06 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/17 19:43:27 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*aux_dst;
	char	*aux_src;

	if (!dest && !src)
		return (NULL);
	aux_dst = (char *)dest;
	aux_src = (char *)src;
	i = 0;
	while (i < n)
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	return (dest);
}
