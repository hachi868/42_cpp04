#include "Cure.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[0m";
const std::string BG_PURPLE = "\033[45m";

Cure::Cure() : AMateria("cure")
{
	std::cout << DEBUG << "[Cure] constructor called (default)" << RESET << std::endl;
}

Cure::Cure(const Cure &obj) : AMateria(obj._type)
{
	std::cout << DEBUG << "[Cure] copy constructor called" << RESET << std::endl;
}

Cure &Cure::operator = (const Cure &obj)
{
	std::cout << DEBUG << "[Cure] assignation operator called" << RESET << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << DEBUG << "[Cure] destructor called" << RESET << std::endl;
}

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << MSG << BG_PURPLE << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}
