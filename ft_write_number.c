#include "ft_printf.h"

int	ft_write_number(int n)
{
	return (ft_write_string(ft_itoa(n)));
}
