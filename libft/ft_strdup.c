/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 11:34:19 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/09 12:28:35 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate_str;
	char	*aux_duplicate;
	int		len_s;

	len_s = ft_strlen(s);
	duplicate_str = (char *) malloc(sizeof(char) * len_s + 1);
	if (duplicate_str == NULL)
		return (NULL);
	aux_duplicate = duplicate_str;
	while (*s != '\0')
	{
		*aux_duplicate = *s;
		aux_duplicate++;
		s++;
	}
	*aux_duplicate = '\0';
	return (duplicate_str);
}
