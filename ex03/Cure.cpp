#include "Cure.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[34m";

Cure::Cure() : AMateria("cure")
{
	std::cout << "[Cure] constructor called (default)" << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj._type)
{
	std::cout << "[Cure] copy constructor called" << std::endl;
}

Cure &Cure::operator = (const Cure &obj)
{
	std::cout << "[Cure] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "[Cure] destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << MSG << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}
