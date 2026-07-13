/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:43:58 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:43:59 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(const std::string name);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat(void);
		
		void makeSound(void) const override;
		Brain* getBrain(void) const override;
	
	private:
		Brain* _brain;
};

#endif