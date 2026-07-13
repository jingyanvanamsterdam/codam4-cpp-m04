# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jdong <jdong@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2026/05/20 18:34:22 by jdong         #+#    #+#                  #
#    Updated: 2026/07/13 16:28:41 by jdong         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = run

HEADER =  Dog.hpp Cat.hpp AAnimal.hpp Brain.hpp

SRC =  Dog.cpp Cat.cpp AAnimal.cpp main.cpp Brain.cpp
OBJ = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++11

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