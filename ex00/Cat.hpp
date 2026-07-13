/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:41:10 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:41:12 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
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
};

#endif