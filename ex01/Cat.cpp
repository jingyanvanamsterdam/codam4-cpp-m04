#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
	: Animal("Cat")
{
	std::cout << GREEN << "Cat default constructor called." << RESET << std::endl;
	_brain = new Brain();
}

Cat::Cat(const std::string name)
	: Animal(name)
{
	std::cout << GREEN << "Cat constructor called." << RESET << std::endl;
}

Cat::Cat(const Cat& obj)
{
	std::cout << GREEN << "Cat copy constructor called. But its brain is its owns" << RESET << std::endl;
	this->_type = obj.getType();
	//this->_brain = new Brain(obj.getBrain());
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << GREEN << "Cat copy operater called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_type = obj.getType();
		//this->_brain = obj.ge
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << RED << "Cat desctructor called." << RESET << std::endl;
	delete _brain;
}

void Cat::makeSound(void) const
{
	std::cout << this->_type << ": meow meow!" << std::endl;
}

//Brain* Cat::getBrain(void) const
//{
//	this->_brain->getIdeasPtr(0);

//}