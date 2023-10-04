#include <iostream>
#include "Character.hpp"

Character::Character(std::string name)
{
	std::cout << "[Character] constructor called (name)" << std::endl;
}

Character::Character(const Character &obj)
{
	std::cout << "[Character] copy constructor called" << std::endl;
}

Character &Character::operator = (const Character &obj)
{
	std::cout << "[Character] assignation operator called" << std::endl;
	if (this != &obj)
		this->_name = obj._name;
	return (*this);
}

Character::~Character()
{
	std::cout << "[Character] destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{

}

void Character::unequip(int idx)
{

}

void Character::use(int idx, ICharacter &target)
{

}
