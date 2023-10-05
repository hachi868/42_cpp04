#include "Ice.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[34m";

Ice::Ice() : AMateria("ice")
{
	std::cout << "[Ice] constructor called (default)" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj._type)
{
	std::cout << "[Ice] copy constructor called" << std::endl;
}

Ice &Ice::operator = (const Ice &obj)
{
	std::cout << "[Ice] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "[Ice] destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << MSG << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
