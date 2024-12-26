/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:47:30 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/11 21:35:48 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (size > 0 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
			size--;
		}
		if (src[i] == '\0' && size > 0)
			dst[i] = '\0';
		else
			dst[i - 1] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
