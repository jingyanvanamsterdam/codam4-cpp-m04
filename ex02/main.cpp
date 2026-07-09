#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	{
		std::cout << "-----test for Constructor and Brain address-------" << std::endl;
		const Dog* dog = new Dog();
		std::cout << "\n";
		const Cat* cat = new Cat();
		std::cout << "\n";
		const Animal* dog_copy = new Dog(*dog);
		std::cout << "\n";
		Cat cat_op;
		cat_op = *cat;
		std::cout << "\n";
		std::cout << "dog's brain address is: " << dog->getBrain() << std::endl;
		std::cout << "dog_copy brain address is: " << dog_copy->getBrain() << std::endl;
		std::cout << "cat's brain address is: " << cat->getBrain() << std::endl;
		std::cout << "cat_op's brain address is: " << cat_op.getBrain() << std::endl;
		std::cout << "\n";

		delete dog;
		delete cat;
		delete dog_copy;
	}
	{
		std::cout << "\n-----test for array and virtual functions-------" << std::endl;	
		const Animal* animal_arr[6];	

		for (int i = 0; i < 3; i++)
			animal_arr[i] = new Dog();

		for (int i = 3; i < 6; i++)
			animal_arr[i] = new Cat();

		for (int i = 0; i < 6; i++)
			animal_arr[i]->makeSound();

		for (int i = 0; i < 6; i++)
			delete animal_arr[i];
	}
	{
		//Animal* animalinstptr = new Animal();
		//Animal animalinst
	}
}