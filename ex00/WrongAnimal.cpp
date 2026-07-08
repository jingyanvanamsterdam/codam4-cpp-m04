#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
	:_type("unknown")
{
	std::cout << GREEN << "Default  constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type)
	:_type(type)
{
	std::cout << GREEN << "Constructor called" << RESET << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& oth)
{
	std::cout << GREEN << "Copy operater called" << RESET << std::endl;
	if (this != &oth)
		this->_type = oth.getType();
	return *this;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "Desctructor called." << RESET << std::endl;
}

const std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal make a sound." << std::endl;
}