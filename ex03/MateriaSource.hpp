#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif //__MATERIASOURCE_HPP__
