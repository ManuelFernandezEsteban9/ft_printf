/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:44:01 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/14 12:52:49 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_str_to_empty(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	if (str == NULL)
		return (NULL);
	*str = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux_start;
	char	*str;
	int		i;	
	size_t	lenstr;

	i = 0;
	aux_start = (char *)s1;
	while (*aux_start != '\0' && ft_strchr(set, *aux_start) != NULL)
	{
		i++;
		aux_start++;
	}
	if (*aux_start == '\0')
	{
		str = ft_str_to_empty();
		return (str);
	}
	lenstr = (size_t) ft_strlen(s1);
	while (ft_strchr(set, s1[lenstr - 1]) != NULL)
		lenstr--;
	str = (char *) malloc(sizeof(char) * (lenstr - i) + 1);
	if (str != NULL)
		ft_strlcpy(str, aux_start, (lenstr - i) + 1);
	return (str);
}
