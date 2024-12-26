/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 21:21:45 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/17 20:42:40 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_number(long int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*ft_fill(long int n, int i, int sign, char *str)
{
	str[i] = '\0';
	while (n > 9)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	i--;
	str[i] = n + '0';
	if (sign > 0)
	{
		str[0] = '-';
	}
	return (str);
}

static	int	ft_sign(long int *n)
{
	if (*n < 0)
	{
		*n = *n * -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		i;
	long	nbr;

	sign = 0;
	nbr = n;
	sign = ft_sign(&nbr);
	i = ft_count_number(nbr);
	if (sign)
		i++;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str = ft_fill(nbr, i, sign, str);
	return (str);
}
