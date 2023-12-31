#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &obj);
	Ice &operator = (const Ice &obj);
	virtual ~Ice();
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif //__ICE_HPP__
