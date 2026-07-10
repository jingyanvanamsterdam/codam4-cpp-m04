#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(void)
	:_type("unknown")
{
	std::cout << GREEN << "AMateria Default constructor called" << RESET << std::endl;
}

AMateria::AMateria(const std::string& type)
	:_type(type)
{
	std::cout << GREEN << "AMateria Constructor called" << RESET << std::endl;
}
AMateria::AMateria(const AMateria& other)
{
	std::cout << GREEN << "AMateria Copy constructor called" << RESET << std::endl;
	*this = other;
}
AMateria& AMateria::operator=(const AMateria& oth)
{
	std::cout << GREEN << "AMateria Copy operater called" << RESET << std::endl;
	if (this != &oth)
		this->_type = oth.getType();
	return *this;
}

AMateria::~AMateria(void) = default;

const std::string&	AMateria::getType() const
{
	return (this->_type);
}

