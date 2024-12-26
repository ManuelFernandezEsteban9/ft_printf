/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 13:31:32 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/13 20:48:35 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_strappend(char *dst, char *src, unsigned int pos)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < pos)
		i++;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	char	*aux_str_join;
	char	*aux;
	int		lens1;
	int		lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str_join = (char *) malloc(lens1 + lens2 + 1);
	if (str_join == NULL)
		return (NULL);
	aux_str_join = str_join;
	aux = (char *)s1;
	ft_strappend(aux_str_join, aux, 0);
	aux = (char *)s2;
	ft_strlcpy(aux_str_join + lens1, aux, lens2 + 1);
	return (str_join);
}
