/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:44:52 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:44:53 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(const std::string& name);
		Character(const Character& obj);
		Character& operator=(const Character& obj);

		~Character(void);

		const std::string& getName(void) const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;

	private:
		Character(void);

		std::string _name;
		AMateria* _materiaSlot[4];

};
#endif