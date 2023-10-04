#include <iostream>
#include "Character.hpp"

GiveawayBox Character::_giveaway;

Character::Character(std::string name) : _name(name)
{
	std::cout << "[Character] constructor called (name)" << std::endl;
}

Character::Character(const Character &obj) : _name(obj._name)
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
	//todo: mが存在しないmateriaの場合（ポインタ不正？typeが不正？）
	int i = 0;
	while (i < this->SLOTS_SIZE)
	{
		std::cout << "[Character] equip : i: " << i << std::endl;
		if (!this->_materia[i])
		{
			this->_materia[i] = m;
			std::cout << "[Character] equip : " << this->_materia[i]->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "[Character] equip : slots FULL" << std::endl;
}

void Character::unequip(int idx)
{
	if (this->_materia[idx])
	{
		std::cout << "[Character] unequip " << std::endl;
		_giveaway.addMateria(this->_materia[idx]);
		this->_materia[idx] = NULL;
	}
	else
		std::cout << "[Character] unequip : _materia[idx] is empty" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (this->_materia[idx])
	{
		std::cout << "[Character] use " << std::endl;
		this->_materia[idx]->use(target);
	}
	else
		std::cout << "[Character] use : _materia[idx] is empty" << std::endl;
}
