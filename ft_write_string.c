#include "ft_printf.h"

int	ft_write_string(char *str)
{
	int	i;

	i = 0;
	while (str && *str!= '\0')
	{
		i = i + ft_write_char(*str);
		str++;
	}
	return (i);
}
