NAME = main

COMPILE = c++ -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp)

OBJ = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME) : $(OBJ)
	$(COMPILE) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(COMPILE) -c $< -o $@

clean :
	rm *.o

fclean:
	rm $(NAME) *.o

re: fclean all

.PHONY: all clean fclean re