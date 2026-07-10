#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& obj);
		MateriaSource& operator=(const MateriaSource& obj);
		
		~MateriaSource(void);
		void learnMateria(AMateria* m);
		AMateria* createMateria(const std::string& type);
	
	private:
		AMateria* _materiaSlot[4];
};

#endif