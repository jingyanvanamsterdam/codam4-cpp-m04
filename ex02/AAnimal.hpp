/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:43:25 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:43:26 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include "Brain.hpp"

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& oth);
		virtual ~AAnimal(void) = 0;
		
		const std::string&	getType() const;

		virtual void makeSound() const;
		virtual Brain* getBrain() const = 0;
	
	protected:
		std::string _type;
};

#endif