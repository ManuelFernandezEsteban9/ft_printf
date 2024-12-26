/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:12:22 by manuel            #+#    #+#             */
/*   Updated: 2024/12/26 19:28:07 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_hex(char *base, unsigned long long nbr, int i)
{
	if (nbr >= 16)
	{
		ft_write_hex(base, nbr / 16, i);
		i = i + ft_write_char(base[nbr % 16]);
	}
	if (nbr < 16)
		i = i + ft_write_char(base[nbr]);
	return (i);
}
