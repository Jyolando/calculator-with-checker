NAME = calculator

SRC = main.c calculator.c utils/ft_atoi.c \
		utils/ft_error.c utils/ft_isdigit.c \
		utils/ft_num_arr.c utils/ft_operation.c

OBJ = $(SRC:.c=.o)

CC = gcc

%.o: %.c
	$(CC) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -I. -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean
	make all