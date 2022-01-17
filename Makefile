NAME = checker

SRC = checker.c utils/ft_itoa.c \
	calculator/calculator.c \
	calculator/utils/ft_atoi.c calculator/utils/ft_error.c \
	calculator/utils/ft_isdigit.c calculator/utils/ft_num_arr.c \
	calculator/utils/ft_operation.c

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