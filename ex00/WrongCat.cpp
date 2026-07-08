#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
	: WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat default constructor called." << RESET << std::endl;
}

WrongCat::WrongCat(const std::string name)
	: WrongAnimal(name)
{
	std::cout << GREEN << "WrongCat constructor called." << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout << GREEN << "WrongCat copy constructor called." << RESET << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << GREEN << "WrongCat copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << RED << "WrongCat desctructor called." << RESET << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->_type << ": meow meow!" << std::endl;
}