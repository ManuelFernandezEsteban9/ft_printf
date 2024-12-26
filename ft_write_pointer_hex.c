/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_pointer_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:12:32 by manuel            #+#    #+#             */
/*   Updated: 2024/12/26 19:17:53 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_pointer_hex(void *p)
{
	unsigned long long	nbr;
	int					i;

	nbr = p;
	i = 0;
	i = ft_write_string("0x");
	i = i + ft_write_hex("0123456789abcdef", nbr, i);
	return (i);
}
