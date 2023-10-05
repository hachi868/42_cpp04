#include "Ice.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[0m";
const std::string BG_PURPLE = "\033[45m";

Ice::Ice() : AMateria("ice")
{
	std::cout << DEBUG << "[Ice] constructor called (default)" << RESET << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj._type)
{
	std::cout << DEBUG << "[Ice] copy constructor called" << RESET << std::endl;
}

Ice &Ice::operator = (const Ice &obj)
{
	std::cout << DEBUG << "[Ice] assignation operator called" << RESET << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << DEBUG << "[Ice] destructor called" << RESET << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << MSG << BG_PURPLE << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}
