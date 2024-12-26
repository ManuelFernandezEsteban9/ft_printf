NAME = libftprintf.a

NAMELIBFT = libft.a

LIBFTDIR = ./libft

CC = clang

CFLAGS = -Wall -Wextra -Werror 

CFILES = ft_printf.c ft_write_number.c ft_write_string.c ft_write_char.c \
	ft_write_hex_low.c ft_write_hex_upp.c ft_write_pointer_hex.c \
       ft_write_unsigned_number.c ft_write_hex.c	

OFILES = $(CFILES:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(NAMELIBFT) .
	@mv $(NAMELIBFT) $(NAME)

$(NAME): makelibft $(OFILES)
	@ar -r $(NAME) $(OFILES)

clean:
	rm -f $(OFILES) 
	cd $(LIBFTDIR) && make clean

fclean: clean
	rm -f $(NAME)
	cd $(LIBFTDIR) && make fclean

re: fclean all
