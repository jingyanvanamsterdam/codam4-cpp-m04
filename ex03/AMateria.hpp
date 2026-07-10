#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

class AMateria
{
	public:
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria& oth);
		virtual ~AMateria(void) = 0;
		
		const std::string&	getType() const;

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target) = 0;
	
	protected:
		std::string _type;
		AMateria(void);
};

#endif