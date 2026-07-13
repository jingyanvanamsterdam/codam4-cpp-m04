/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:45:09 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:45:10 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << GREEN << "Ice default constructor called." << RESET << std::endl;
}

Ice::Ice(const Ice& obj)
	: AMateria(obj._type)
{
	std::cout << GREEN << "Ice copy constructor called." << RESET << std::endl;
	*this = obj;
}

Ice& Ice::operator=(const Ice& obj)
{
	std::cout << GREEN << "Ice copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_type = obj.getType();
	}
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << RED << "Ice desctructor called." << RESET << std::endl;
}

AMateria* Ice::clone(void) const
{
	std::cout << RED << "You are cloning a Ice materia. An instance ptr will be returned. don't forget to delete it." << RESET << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << " shoots an ice bolt at " << target.getName() << "." << std::endl;
}