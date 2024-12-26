/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:22:05 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/17 20:01:04 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*aux_s1;
	char	*aux_s2;
	size_t	i;

	if (n == 0)
		return (0);
	if (!s1 && !s2)
		return (0);
	i = 0;
	aux_s1 = (char *)s1;
	aux_s2 = (char *)s2;
	while (i < n)
	{
		if ((unsigned char)aux_s1[i] != (unsigned char)aux_s2[i])
			return ((unsigned char)aux_s1[i] - (unsigned char)aux_s2[i]);
		i++;
	}
	return (0);
}
