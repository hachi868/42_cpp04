#include "Ice.hpp"
Ice::Ice()
{
	std::cout << "[Ice] constructor called (default)" << std::endl;
}

Ice::Ice(const Ice &obj)
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
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}