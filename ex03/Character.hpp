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

		const std::string& getName(void) const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		Character(void);

		std::string _name;
		AMateria* _materiaSlot[4];

};
#endif