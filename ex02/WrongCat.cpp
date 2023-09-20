#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] constructor called (default)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj._type)
{
	std::cout << "[WrongCat] copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &obj)
{
	std::cout << "[WrongCat] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "[WrongCat] 🐼I'm Cat." << std::endl;
}
