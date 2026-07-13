/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdong <jdong@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/13 16:42:58 by jdong         #+#    #+#                 */
/*   Updated: 2026/07/13 16:42:59 by jdong         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


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
		dog->getBrain()->setIdea(0, "Go to the park!");
		dog->getBrain()->setIdea(1, "F!O!O!D!");
		dog->getBrain()->setIdea(2, "Go to annoy the cat!");

		const Animal* dog_copy = new Dog(*dog);
		std::cout << "\n";
		std::cout << "dog's brain address is: " << dog->getBrain() << std::endl;
		std::cout << "dog_copy brain address is: " << dog_copy->getBrain() << std::endl;
		std::cout << "\n";
		std::cout << dog->getBrain()->getIdea(0) << std::endl;
		std::cout << dog->getBrain()->getIdea(1) << std::endl;
		std::cout << dog_copy->getBrain()->getIdea(0) << std::endl;
		std::cout << dog_copy->getBrain()->getIdea(1) << std::endl;
		std::cout << dog_copy->getBrain()->getIdea(2) << std::endl;	
		std::cout << "\n";

		Cat cat_op;
		cat->getBrain()->setIdea(0, "Zommie time!");
		cat->getBrain()->setIdea(1, "F!O!O!D!");
		cat->getBrain()->setIdea(2, "KILL!");

		cat_op = *cat;
		std::cout << "\n";
		
		std::cout << "cat's brain address is: " << cat->getBrain() << std::endl;
		std::cout << "cat_op's brain address is: " << cat_op.getBrain() << std::endl;
		std::cout << "\n";

		std::cout << cat->getBrain()->getIdea(0) << std::endl;
		std::cout << cat->getBrain()->getIdea(1) << std::endl;
		std::cout << cat_op.getBrain()->getIdea(0) << std::endl;
		std::cout << cat_op.getBrain()->getIdea(1) << std::endl;
		std::cout << cat_op.getBrain()->getIdea(2) << std::endl;	
		std::cout << "\n";

		delete dog;
		delete cat;
		delete dog_copy;
	}
	{
		std::cout << "\n-----test for array and virtual functions-------" << std::endl;	
		Animal* animal_arr[6];	

		for (int i = 0; i < 3; i++)
		{
			animal_arr[i] = new Dog();
			std::cout << "\n";
		}

		for (int i = 3; i < 6; i++)
		{
			animal_arr[i] = new Cat();
			std::cout << "\n";
		}

		for (int i = 0; i < 6; i++)
			animal_arr[i]->makeSound();
		
		std::cout << "\n";

		animal_arr[0]->getBrain()->setIdea(0, "Walking in the park!");
		animal_arr[3]->getBrain()->setIdea(0, "Push it off the table!");
		std::cout << "\n";
		std::cout << animal_arr[0]->getBrain()->getIdea(0) << std::endl;
		std::cout << animal_arr[3]->getBrain()->getIdea(0) << std::endl;
		std::cout << "\n";

		for (int i = 0; i < 6; i++)
		{
			delete animal_arr[i];
			std::cout << "\n";
		}
	}
}