#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	std::cout << GREEN << "MateriaSource default constructor called." << RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	std::cout << GREEN << "MateriaSource copy constructor called. But its brain is its owns" << RESET << std::endl;
	*this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	std::cout << GREEN << "MateriaSource copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 4 && obj._materiaSlot[i] != NULL; i++)
		{
			this->_materiaSlot[i] = obj._materiaSlot[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << RED << "MateriaSource desctructor called." << RESET << std::endl;
	for (int i = 0; this->_materiaSlot[i] != NULL && i < 4; i++)
		delete this->_materiaSlot[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;
	while (this->_materiaSlot[i] != NULL && i < 4)
		i++;
	if (i == 4)
		return;
	this->_materiaSlot[i] = m;
	std::cout << "A materia is added." << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	AMateria* m;
	for (int i = 0; i < 4 && this->_materiaSlot[i] != NULL; i++)
	{
		if (this->_materiaSlot[i]->getType() == type)
		{
			m = this->_materiaSlot[i]->clone();
			return m;
		}
	}
	return 0;
}
