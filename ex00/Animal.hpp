#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

class Animal
{
	public:
		Animal(void);
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& oth);
		virtual ~Animal(void);
		
		const std::string&	getType() const;
		
		virtual void makeSound() const;
	
	protected:
		std::string _type;
};

#endif