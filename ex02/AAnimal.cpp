/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:43:14 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:43:15 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void)
	:_type("unknown")
{
	std::cout << GREEN << "AAnimal Default constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const std::string& type)
	:_type(type)
{
	std::cout << GREEN << "AAnimal Constructor called" << RESET << std::endl;
}
AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << GREEN << "AAnimal Copy constructor called" << RESET << std::endl;
	*this = other;
}
AAnimal& AAnimal::operator=(const AAnimal& oth)
{
	std::cout << GREEN << "AAnimal Copy operater called" << RESET << std::endl;
	if (this != &oth)
		this->_type = oth.getType();
	return *this;
}
AAnimal::~AAnimal(void) = default;

const std::string&	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal make a sound." << std::endl;
}