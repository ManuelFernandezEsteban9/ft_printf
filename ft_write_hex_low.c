#include "ft_printf.h"

int	ft_write_hex_low(int number)
{
	unsigned 	long long nbr;

	nbr = number;
	return (ft_write_hex("0123456789abcdef", nbr, 0));
}
