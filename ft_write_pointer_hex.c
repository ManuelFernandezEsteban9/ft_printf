#include "ft_printf.h"

int	ft_write_pointer_hex(void *p)
{
	unsigned long long nbr;
	int	i;

	nbr = p;
	i = 0;
	i = ft_write_string("0x");
	i = i + ft_write_hex("0123456789abcdef", nbr, i);
	return (i);
}
