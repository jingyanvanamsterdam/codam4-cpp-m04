#include "Cure.hpp"
#include <iostream>

Cure::Cure(void)
	: AMateria("cure")
{
	std::cout << GREEN << "Cure default constructor called." << RESET << std::endl;
}

Cure::Cure(const Cure& obj)
	: AMateria(obj.getType())
{
	std::cout << GREEN << "Cure copy constructor called." << RESET << std::endl;
	*this = obj;
}

Cure& Cure::operator=(const Cure& obj)
{
	std::cout << GREEN << "Cure copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << RED << "Cure desctructor called." << RESET << std::endl;
}

AMateria* Cure::clone(void) const
{
	std::cout << RED << "You are cloning a Cure materia. An instance ptr will be returned. don't forget to delete it." << RESET << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << " heals " << target.getName() << "\'s wounds." << std::endl;
}