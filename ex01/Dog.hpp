/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:42:50 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:42:51 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const std::string name);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		~Dog(void);
		
		void makeSound(void) const;
		Brain* getBrain(void) const;
	
	private:
		Brain* _brain;
};

#endif