#include "ft_printf.h"

int	ft_write_hex_upp(int number)
{
	unsigned long long nbr;

	number = nbr;
	return (ft_write_hex("0123456789ABCDEF", nbr, 0));
}
