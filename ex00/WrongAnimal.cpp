#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimalCommon")
{
	std::cout << "[WrongAnimal] constructor called (default)" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "[WrongAnimal] constructor called (type)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : _type(obj._type)
{
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj)
{
	std::cout << "[WrongAnimal] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] 🙊" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
