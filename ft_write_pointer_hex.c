#include "ft_printf.h"

static	int	ft_write_hex(unsigned long long nbr, int i)
{
	char	*base;

	base ="0123456789abcdef";
	if (nbr >= 16)
	{
		ft_write_hex(nbr / 16, i);
		i = i + ft_write_char(base[n % 16]);
	}
	if (nbr < 16)
	{
		i = i + ft_write_char(base[n]);
	}
	return (i);
}

int	ft_write_pointer_hex(void *p)
{
	unsigned long long nbr;
	int	i;

	nbr = p;
	i = 0;
	i = ft_write_string("0x");
	i = i + ft_write_hex(nbr, i);
	return (i);
}
