#include "Ice.hpp"
Ice::Ice()
{

}

Ice::Ice(const Ice &obj)
{

}

Ice::Ice &operator = (const Ice &obj)
{

}

Ice::~Ice()
{

}

Ice *Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}