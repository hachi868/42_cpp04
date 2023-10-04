#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria() : _type("undefined")
{
	std::cout << "[AMateria] constructor called (default)" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << "[AMateria] constructor called (type)" << std::endl;
}

AMateria::AMateria(const AMateria &obj) : _type(obj._type)
{
	std::cout << "[AMateria] copy constructor called" << std::endl;
}

AMateria &AMateria::operator = (const AMateria &obj)
{
	std::cout << "[AMateria] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "[AMateria] destructor called" << std::endl;
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "[AMateria] use func called: " << target.getName() << std::endl;
}