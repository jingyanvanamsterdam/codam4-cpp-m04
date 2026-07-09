#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const std::string name);
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		~Dog(void);
		
		void makeSound(void) const;
		const Brain* getBrain(void) const;
	
	private:
		Brain* _brain;
};

#endif