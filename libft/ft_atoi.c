/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuelfe <manuelfe@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:32:24 by manuelfe          #+#    #+#             */
/*   Updated: 2024/12/13 20:32:59 by manuelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_sign(int c)
{
	if (c == '-')
		return (1);
	else if (c == '+')
		return (0);
	return (-1);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 0;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (ft_strncmp(nptr, "-2147483648", 11) == 0)
		return (-2147483648);
	sign = ft_sign(nptr[i]);
	if (sign >= 0)
		i++;
	while ((nptr[i] >= 48 && nptr[i] <= 57) && (nptr[i] != '\0'))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	if (sign == 1)
		res = res * -1;
	return (res);
}
