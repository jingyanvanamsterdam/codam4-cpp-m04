#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
	: Animal("Dog")
{
	std::cout << GREEN << "Dog default constructor called." << RESET << std::endl;
}

Dog::Dog(const std::string name)
	: Animal(name)
{
	std::cout << GREEN << "Dog constructor called." << RESET << std::endl;
}

Dog::Dog(const Dog& obj)
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
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << RED << "Dog desctructor called." << RESET << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << this->_type << ": woof!" << std::endl;
}