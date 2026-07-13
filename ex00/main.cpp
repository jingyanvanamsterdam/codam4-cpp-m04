/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:41:37 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:41:38 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << "\n";
	const Animal* i = new Dog();
	std::cout << "\n";
	const Animal* j = new Cat();
	std::cout << "\n";


	std::cout << "i: " << i->getType() << " " << std::endl;
	std::cout << "j: " << j->getType() << " " << std::endl;
	std::cout << "meta: " << meta->getType() << " " << std::endl;
	std::cout << "\n";

	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "\n";

	const WrongAnimal* wmeta = new WrongAnimal();
	std::cout << "\n";
	const WrongAnimal* wcat = new WrongCat();
	std::cout << "\n";
	const WrongCat* cat = new WrongCat();
	std::cout << "\n";

	std::cout << "wcat: " << wcat->getType() << " " << std::endl;
	std::cout << "wmeta: " << wmeta->getType() << " " << std::endl;
	std::cout << "cat: " << cat->getType() << std::endl;
	std::cout << "\n";

	std::cout << "wcat is going to make a sound: " << std::endl;
	wcat->makeSound();
	std::cout << "\n";
	std::cout << "cat is going to make a sound: " << std::endl;
	cat->makeSound();
	std::cout << "\n";
	std::cout << "wcat is going to make a sound: " << std::endl;
	wmeta->makeSound();
	std::cout << "\n";

	//const Animal* animalptr = new Animal();
	//Animal animal_inst;
	// delete animalptr;

	delete meta;
	std::cout << "\n";
	delete i;
	std::cout << "\n";
	delete j;
	std::cout << "\n";
	delete wmeta;
	std::cout << "\n";
	delete wcat;
	std::cout << "\n";
	delete cat;
}