#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] constructor called (default)" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj._type)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &obj)
{
	std::cout << "[Cat] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] 🐈Meow" << std::endl;
}
