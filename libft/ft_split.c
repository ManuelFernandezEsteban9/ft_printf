/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:29:56 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/14 21:06:38 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			words++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (words);
}

void	ft_free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_fill_res(const char *s, char **res, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*s != '\0' && *s != c && ++len)
				s++;
			res[i] = ft_substr(s - len, 0, len);
			if (!res[i])
			{
				ft_free_str(res);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (res == NULL)
		return (NULL);
	res = ft_fill_res(s, res, c);
	return (res);
}
