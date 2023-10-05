#include <iostream>
#include <typeinfo>
#include "Character.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string ALERT = "\033[31m";
const std::string MSG = "\033[34m";

GiveawayBox Character::_giveaway;

Character::Character(std::string name) : _name(name)
{
	std::cout << DEBUG << "[Character] constructor called (name)" << RESET << std::endl;
	int i = 0;
	while (i < this->SLOTS_SIZE)
	{
		this->_materia[i] = NULL;
		i++;
	}
}

Character::Character(const Character &obj) : _name(obj._name)
{
	std::cout << DEBUG << "[Character] copy constructor called" << RESET << std::endl;
	int i = 0;
	while (i < this->SLOTS_SIZE)
	{
		if (obj._materia[i])
			this->_materia[i] = obj._materia[i]->clone();
		else
			this->_materia[i] = NULL;
		i++;
	}
}

Character &Character::operator = (const Character &obj)
{
	std::cout << DEBUG << "[Character] assignation operator called" << RESET << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		int i = 0;
		while (i < this->SLOTS_SIZE)
		{
			if (obj._materia[i])
				this->_materia[i] = obj._materia[i]->clone();
			else
				this->_materia[i] = NULL;
			i++;
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << DEBUG << "[Character] destructor called" << RESET << std::endl;
	int i = 0;
	while (i < this->SLOTS_SIZE)
	{
		if (this->_materia[i])
		{
			delete this->_materia[i];
			this->_materia[i] = NULL;
		}
		i++;
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	//todo: mが存在しないmateriaの場合（ポインタ不正？typeが不正？）
	int i = 0;
	if (m == NULL)
	{
		std::cout << ALERT << "[Character] equip : pointer is NULL" << RESET << std::endl;
		return ;
	}
	while (i < this->SLOTS_SIZE)
	{
		if (!this->_materia[i])
		{
			std::cout << STATE << "[Character] equip " << RESET << std::endl;
			this->_materia[i] = m;
			return ;
		}
		i++;
	}
	std::cout << ALERT << "[Character] equip : slots FULL" << RESET << std::endl;
}

void Character::unequip(int idx)
{
	if (this->_materia[idx])
	{
		std::cout << STATE << "[Character] unequip " << RESET << std::endl;
		_giveaway.addMateria(this->_materia[idx]);
		this->_materia[idx] = NULL;
	}
	else
		std::cout << ALERT << "[Character] unequip : _materia[idx] is empty" << RESET << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->SLOTS_SIZE)
	{
		std::cout << ALERT << "[Character] use : idx is out of range" << RESET << std::endl;
		return ;
	}
	if (this->_materia[idx])
	{
		std::cout << STATE << "[Character] use " << RESET << std::endl;
		this->_materia[idx]->use(target);
	}
	else
		std::cout << ALERT << "[Character] use : _materia[idx] is empty" << RESET << std::endl;
}
