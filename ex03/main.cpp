#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "\n";

	src->learnMateria(new Ice());
	std::cout << "\n";

	src->learnMateria(new Cure());
	std::cout << "\n";

	ICharacter* me = new Character("me");
	std::cout << "\n";

	AMateria* ice;
	ice = src->createMateria("ice");
	std::cout << "\n";
	
	me->equip(ice);
	std::cout << "\n";

	AMateria* cure;
	cure = src->createMateria("cure");
	std::cout << "\n";

	me->equip(cure);
	std::cout << "\n";

	ICharacter* bob = new Character("bob");
	std::cout << "\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	std::cout << RED << "---After heal bob, should print nothing.---" << RESET << std::endl;
	std::cout << "\n";

	bob->unequip(2);
	std::cout << RED << "bob has not equiped. Above should not print anything." << RESET << std::endl;
	bob->equip(cure);
	bob->use(0, *me);
	bob->unequip(0);
	std::cout << "\n";

	me->unequip(0);
	std::cout << "\n";

	delete bob;
	std::cout << "\n";
	delete me;
	std::cout << "\n";
	delete src;
	std::cout << "\n";
	delete ice;
	std::cout << "\n";
	return 0;
}