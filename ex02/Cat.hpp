#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const std::string name);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat(void);
		
		void makeSound(void) const override;
		const Brain* getBrain(void) const override;
	
	private:
		Brain* _brain;
};

#endif