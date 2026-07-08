#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();


	std::cout << "i: " << i->getType() << " " << std::endl;
	std::cout << "j: " << j->getType() << " " << std::endl;
	std::cout << "meta: " << meta->getType() << " " << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << "wcat: " << wcat->getType() << " " << std::endl;
	std::cout << "wmeta: " << wmeta->getType() << " " << std::endl;

	wcat->makeSound();
	wmeta->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wmeta;
	delete wcat;
}