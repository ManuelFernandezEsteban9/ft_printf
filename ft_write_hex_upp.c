/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex_upp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:12:17 by manuel            #+#    #+#             */
/*   Updated: 2024/12/26 19:22:37 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_write_hex_upp(int number)
{
	unsigned long long	nbr;

	nbr = number;
	return (ft_write_hex("0123456789ABCDEF", nbr, 0));
}
