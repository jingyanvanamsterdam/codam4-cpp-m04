/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:44:46 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:44:47 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>
#include <string>

Character::Character(void) { }

Character::Character(const std::string& name)
	: _name(name)
{
	std::cout << GREEN << "Character constructor called" << RESET << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materiaSlot[i] = NULL;
}

Character::Character(const Character& obj)
	: _name(obj._name)
{
	std::cout << GREEN << "Character copy constructor called" << RESET << std::endl;

	for (int i = 0; i < 4; i++)
		this->_materiaSlot[i] = NULL;

	*this = obj;
}

Character& Character::operator=(const Character& obj)
{
	std::cout << GREEN << "Character = operator called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_name = obj.getName();
		int i = 0;
		while (i < 4 && obj._materiaSlot[i] != NULL)
		{
			this->_materiaSlot[i] = obj._materiaSlot[i]->clone();
			i++;
		}
	}
	return (*this);
}

Character::~Character(void)
{
	std::cout << RED << "Character destructor called" << RESET << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaSlot[i] != NULL)
			delete this->_materiaSlot[i];
	}
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
	std::cout << m->getType() << " is equiped to " << this->_name << "." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || this->_materiaSlot[idx] == NULL)
		return;
	const std::string& type = this->_materiaSlot[idx]->getType();
	std::cout << this->_name << "'s " << type << " at slot " << idx << " has been unequiped." << std::endl;
	//std::cout << RED << "Remeber to delete the AMateria if it is not being equiped by others anymore." << RESET << std::endl;
	this->_materiaSlot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || this->_materiaSlot[idx] == NULL)
		return;

	std::cout << this->_name;
	this->_materiaSlot[idx]->use(target);
}