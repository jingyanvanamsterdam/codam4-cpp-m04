#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
	:_type("unknown")
{
	std::cout << GREEN << "Default  constructor called" << RESET << std::endl;
}

Animal::Animal(const std::string type)
	:_type(type)
{
	std::cout << GREEN << "Constructor called" << RESET << std::endl;
}
Animal::Animal(const Animal& other)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = other;
}
Animal& Animal::operator=(const Animal& oth)
{
	std::cout << GREEN << "Copy operater called" << RESET << std::endl;
	if (this != &oth)
		this->_type = oth.getType();
	return *this;
}
Animal::~Animal(void)
{
	std::cout << RED << "Desctructor called." << RESET << std::endl;
}

const std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal make a sound." << std::endl;
}