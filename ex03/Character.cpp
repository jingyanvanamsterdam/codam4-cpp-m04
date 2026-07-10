#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

Character::Character(void) { }

Character::Character(const std::string& name)
	: _name(name)
{
	std::cout << GREEN << "Character constructor called" << RESET << std::endl;
}

Character::Character(const Character& obj)
	: _name(obj._name)
{
	std::cout << GREEN << "Character copy constructor called" << RESET << std::endl;

	*this = obj;
}

Character& Character::operator=(const Character& obj)
{
	std::cout << GREEN << "Character = operator called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_name = obj.getName();
		for (int i = 0; i < 4 && obj._materiaSlot[i] != NULL; i++)
		{
			this->_materiaSlot[i] = obj._materiaSlot[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << RED << "Character destructor called" << RESET << std::endl;
	// Delete materias
	for (int i = 0; this->_materiaSlot[i] != NULL && i < 4; i++)
		delete this->_materiaSlot[i];
}

const std::string& Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	int	i = 0;
	while (this->_materiaSlot[i] != NULL && i < 4)
		i++;
	if (i == 4)
		return;
	this->_materiaSlot[i] = m;
	std::cout << "A materia is equiped to " << this->_name << "." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || this->_materiaSlot[idx] == NULL)
		return;
	this->_materiaSlot[idx] = NULL;
	std::cout << "Materia at slot " << idx << " has been unequiped." << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || this->_materiaSlot[idx] == NULL)
		return;

	this->_materiaSlot[idx]->use(target);
}