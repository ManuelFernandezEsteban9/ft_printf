/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:12:11 by manuel            #+#    #+#             */
/*   Updated: 2024/12/26 19:14:21 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_hex_low(int number)
{
	unsigned long long	nbr;

	nbr = number;
	return (ft_write_hex("0123456789abcdef", nbr, 0));
}
