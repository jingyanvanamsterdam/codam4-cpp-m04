/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:45:29 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:45:30 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>
//instead of add header file of AMateria, it is "Forward declaration", tells the compiler there is the class. Otherwise, ICharater is also being included in the AMateria, which cause the cirualtion

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter(void) = 0;

		virtual const std::string& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

};
#endif