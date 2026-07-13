/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:41:48 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:41:49 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& oth);
		~WrongAnimal(void);
		
		const std::string	getType() const;
		void makeSound() const;
	
	protected:
		std::string _type;
};

#endif