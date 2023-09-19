NAME    = fixed
SRC             = $(wildcard *.cpp)
OBJ             = $(SRC:%.cpp=%.o)
CC              = c++
FLAGS   = -Wall -Wextra -Werror -std=c++98
RM              = rm -f

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
