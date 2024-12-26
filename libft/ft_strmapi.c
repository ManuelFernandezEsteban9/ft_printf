/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:33:28 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/10 20:05:35 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len_s;
	char			*new_s;

	len_s = ft_strlen(s);
	new_s = malloc(sizeof(char) * len_s + 1);
	if (new_s && s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			new_s[i] = f(i, s[i]);
			i++;
		}
		new_s[i] = '\0';
	}
	return (new_s);
}
