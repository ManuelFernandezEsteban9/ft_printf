/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 11:59:02 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/17 20:29:47 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*aux_dest;
	char	*aux_src;

	aux_dest = (char *)dest;
	aux_src = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
	{
		while (n-- > 0)
			*aux_dest++ = *aux_src++;
	}
	else if (dest > src)
	{
		aux_dest = aux_dest + n - 1;
		aux_src = aux_src + n - 1;
		while (n-- > 0)
			*aux_dest-- = *aux_src--;
	}
	return (dest);
}
