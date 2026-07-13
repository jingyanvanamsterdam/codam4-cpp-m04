/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:42:42 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:42:43 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
	: Animal("Dog")
{
	std::cout << GREEN << "Dog default constructor called." << RESET << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const std::string name)
	: Animal(name)
{
	std::cout << GREEN << "Dog constructor called." << RESET << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& obj)
	: Animal(obj.getType()), _brain(NULL)
{
	std::cout << GREEN << "Dog copy constructor called." << RESET << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << GREEN << "Dog copy operater called" << RESET << std::endl;
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

Dog::~Dog(void)
{
	std::cout << RED << "Dog desctructor called." << RESET << std::endl;
	delete _brain;
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << ": woof!" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return (this->_brain);
}