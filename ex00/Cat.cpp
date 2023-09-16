#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	Cat::setType("Cat");
	std::cout << "[Cat] constructor called (default)" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator = (const Cat &obj)
{
	std::cout << "[Cat] assignation operator called" << std::endl;
	if (this != &obj)
		this->getType() = obj._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] 🐈Meow" << std::endl;
}
