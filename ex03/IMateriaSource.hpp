#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"


class IMateriaSource
{
	public:	
		virtual ~IMateriaSource(void) = 0;
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;

	private:
};

#endif