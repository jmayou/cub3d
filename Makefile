NAME = cub3d

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

SRC =  main.cpp 
 
OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ) header.h
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean 
	rm -rf  $(NAME)

re : fclean all 

.PHONY : all clean fclean re