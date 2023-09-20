#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria() : _type("undefined")
{

}

AMateria::AMateria(const std::string &type) : _type(type)
{

}

AMateria::AMateria(const AMateria &obj) : _type(obj._type)
{

}

AMateria &AMateria::operator = (const AMateria &obj)
{

}

AMateria::~AMateria()
{

}

const std::string &AMateria::getType() const
{

}

void use(ICharacter &target)
{

}
