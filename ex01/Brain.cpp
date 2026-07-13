/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:42:19 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:42:20 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(void)
{
	std::cout << GREEN << "Brain default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << GREEN << "Brain copy constructor called" << RESET << std::endl;

	*this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
	std::cout << GREEN << "Brain = operator called" << RESET << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->_ideas[i] = "copied ideas: " + obj.getIdea(i);
		}
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

const std::string& Brain::getIdea(size_t i) const
{
	if (i >= 100)
	{
		std::cout << RED << "The idx of the idea is out of range. Only 100 ideas are stored in the brain. First idea is being returned." << RESET << std::endl;
		return (this->_ideas[0]);
	}
	return this->_ideas[i];
}

void Brain::setIdea(size_t i, const std::string& idea)
{
	if (i >= 100)
	{
		std::cout << RED << "No more storage for new ideas." << RESET << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
	return ;
}

const std::string* Brain::getIdeasPt() const
{
	return (this->_ideas);
}