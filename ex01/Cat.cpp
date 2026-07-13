/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:42:31 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:42:32 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
	: Animal("Cat")
{
	std::cout << GREEN << "Cat default constructor called." << RESET << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const std::string name)
	: Animal(name)
{
	std::cout << GREEN << "Cat constructor called." << RESET << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& obj)
	: Animal(obj.getType()), _brain(NULL)
{
	std::cout << GREEN << "Cat copy constructor called. But its brain is its owns" << RESET << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << GREEN << "Cat copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_type = obj.getType();
		if (this->_brain == NULL)
			this->_brain = new Brain(*(obj.getBrain()));
		else
			*(this->_brain) = *(obj.getBrain());
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat desctructor called." << RESET << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << this->_type << ": meow meow!" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return (this->_brain);
}

