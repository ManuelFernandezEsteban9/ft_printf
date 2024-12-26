NAME = libftprintf.a

NAMELIBFT = libft.a

LIBFTDIR = ./libft

CC = clang

CFLAGS = -Wall -Wextra -Werror 

%.o: %.c 
	$(CC) $(CFLAGS) -c  $< -o $@

CFILES = ft_printf.c ft_write_number.c ft_write_string.c ft_write_char.c \
	ft_write_hex_low.c ft_write_hex_upp.c ft_write_pointer_hex.c 

OFILES = $(CFILES: .c=.o)

HFILES = ft_printf.h

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
