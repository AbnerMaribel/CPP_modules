NAME = templates

COMPILE = c++ -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp)

OBJ = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME) : $(OBJ)
	$(COMPILE) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(COMPILE) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re