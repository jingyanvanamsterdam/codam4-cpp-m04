/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:41:04 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:41:05 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
	: Animal("Cat")
{
	std::cout << GREEN << "Cat default constructor called." << RESET << std::endl;
}

Cat::Cat(const std::string name)
	: Animal(name)
{
	std::cout << GREEN << "Cat constructor called." << RESET << std::endl;
}

Cat::Cat(const Cat& obj)
{
	std::cout << GREEN << "Cat copy constructor called." << RESET << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << GREEN << "Cat copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat desctructor called." << RESET << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << this->_type << ": meow meow!" << std::endl;
}