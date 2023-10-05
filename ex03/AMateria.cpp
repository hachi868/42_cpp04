#include <iostream>
#include "AMateria.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[34m";

AMateria::AMateria() : _type("undefined")
{
	std::cout << DEBUG << "[AMateria] constructor called (default)" << RESET << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout << DEBUG << "[AMateria] constructor called (type)" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &obj) : _type(obj._type)
{
	std::cout << DEBUG << "[AMateria] copy constructor called" << RESET << std::endl;
}

AMateria &AMateria::operator = (const AMateria &obj)
{
	std::cout << DEBUG << "[AMateria] assignation operator called" << RESET << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << DEBUG << "[AMateria] destructor called" << RESET << std::endl;
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << STATE << "[AMateria] use func called: " << target.getName() << RESET << std::endl;
}