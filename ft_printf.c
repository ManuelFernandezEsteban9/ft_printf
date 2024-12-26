/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 19:11:55 by manuel            #+#    #+#             */
/*   Updated: 2024/12/26 19:20:42 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_converter(char op, va_list args)
{
	if (op == '%')
		return (ft_write_char(op));
	if (op == 'i')
		return (ft_write_number(va_arg(args, int)));
	if (op == 'c')
		return (ft_write_char((char)va_arg(args, int)));
	if (op == 's')
		return (ft_write_string(va_arg(args, char *)));
	if (op == 'd')
		return (ft_write_number(va_arg(args, int)));
	if (op == 'p')
		return (ft_write_pointer_hex(va_arg(args, void *)));
	if (op == 'u')
		return (ft_write_unsigned_number(va_arg(args, unsigned int)));
	if (op == 'x')
		return (ft_write_hex_low(va_arg(args, int)));
	if (op == 'X')
		return (ft_write_hex_upp(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	while (format && *format != '\0')
	{
		if (*format != '%')
		{
			count = count + ft_write_char(*format);
			format++;
		}
		else
		{
			count = count + ft_converter(*format++, args);
		}
	}
	va_end(args);
	return (count);
}
