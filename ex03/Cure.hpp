#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <string>

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& obj);
		Cure& operator=(const Cure& obj);
		~Cure(void);
		
		AMateria* clone(void) const override;
		void use(ICharacter& target) override;
};

#endif