/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:42:35 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:42:36 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const std::string name);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat(void);
		
		void makeSound(void) const;
		Brain* getBrain(void) const;
	
	private:
		Brain* _brain;
};

#endif