#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_write_number(int n);
int	ft_write_string(char *s);
int	ft_write_char(char c);
int	ft_write_hex_low(int number);
int	ft_write_hex_upp(int number);
int	ft_write_pointer_hex(void *p);
int	ft_write_unsigned_number(unsigned int nbr);

#endif
