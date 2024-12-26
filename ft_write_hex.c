#include "ft_printf.h"

int	ft_write_hex(char *base, unsigned long long nbr, int i)
{
	if (nbr >= 16)
	{
		ft_write_hex(base, nbr / 10, i);
		i = i + ft_write_char(base[n % 16]);
	}
	if (nbr < 16)
		i = i + ft_write_char(base[n]);
	return (i);
}


