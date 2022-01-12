NAME = libft.a
SRC = ft_*.c
OBJ = $(SRC:.o.c)


all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	CC $(SRC) -c 

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)
