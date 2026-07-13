/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:41:43 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:41:44 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
	:_type("unknown")
{
	std::cout << GREEN << "Wrong Animal Default  constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
	:_type(type)
{
	std::cout << GREEN << "Wrong Animal Constructor called" << RESET << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << GREEN << "Wrong Animal Copy constructor called" << RESET << std::endl;
	*this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& oth)
{
	std::cout << GREEN << "Wrong Animal Copy operater called" << RESET << std::endl;
	if (this != &oth)
		this->_type = oth.getType();
	return *this;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "Wrong Animal Desctructor called." << RESET << std::endl;
}

const std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make a sound." << std::endl;
}