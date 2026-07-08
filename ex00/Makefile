# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jdong <jdong@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2026/05/20 18:34:22 by jdong         #+#    #+#                  #
#    Updated: 2026/07/08 17:04:59 by jingyandong   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = run

HEADER =  Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp

SRC =  Dog.cpp Cat.cpp Animal.cpp main.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all, clean, fclean