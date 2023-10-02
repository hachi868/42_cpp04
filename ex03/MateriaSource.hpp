#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource &operator = (const MateriaSource &obj);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria *materiaNew);
	virtual AMateria* createMateria(std::string const &type);
private:
	AMateria *_memory[4];
};

#endif //__MATERIASOURCE_HPP__
