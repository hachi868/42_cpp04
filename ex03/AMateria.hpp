#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"
//class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(const std::string &type);
	AMateria(const AMateria &obj);
	AMateria &operator = (const AMateria &obj);
	virtual ~AMateria();
	const std::string &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);

protected:
	std::string _type;
};

#endif //__AMATERIA_HPP__
