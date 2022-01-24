NAME = libft.a
// INCLUDE = -I /User/iyoshiha/include/
INCLUDE = -I include/
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)
CC = gcc

SRCFILE =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
			bi_ring_lstadd_back.c bi_ring_lstadd_front.c bi_ring_lstclear.c \
			bi_ring_lstdel_one.c bi_ring_lstiter.c bi_ring_lstnew.c bi_ring_lstsize.c \
			get_next_line.c get_next_line_utils.c \
			handle_c.c handle_i.c handle_low_x.c handle_pct.c handle_u.c \
			handle_d.c handle_large_x.c handle_p.c handle_s.c \
			print_address.c print_decimal_base.c print_hex_base.c \
			convert_and_count.c ft_printf.c output.c \
			bubble_sort.c \

OBJECTS = $(SRCFILE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	gcc -c $< -o $@ $(CFLAGS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
