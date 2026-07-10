# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jdong <jdong@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2026/05/20 18:34:22 by jdong         #+#    #+#                  #
#    Updated: 2026/07/10 19:11:34 by jdong         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = run

HEADER =  AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp \
		  IMateriaSource.hpp MateriaSource.hpp

SRC =  AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp \
	   IMateriaSource.cpp MateriaSource.cpp main.cpp
	   
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