/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:44:14 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:44:15 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const std::string name);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		~Dog(void);
		
		void makeSound(void) const override;
		Brain* getBrain(void) const override;
	
	private:
		Brain* _brain;
};

#endif