#ifndef WrongCAT_HPP
#define WrongCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const std::string name);
		WrongCat(const WrongCat& obj);
		WrongCat& operator=(const WrongCat& obj);
		~WrongCat(void);
		
		void makeSound(void) const;
};

#endif