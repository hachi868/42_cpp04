#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] constructor called (default)" << std::endl;
	Cat::setType("Cat");
	this->_brain = new Brain();
}

Cat::Cat(const Cat &obj)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
	*this = obj;
	this->_brain = new Brain();
}

Cat &Cat::operator = (const Cat &obj)
{
	std::cout << "[Cat] assignation operator called" << std::endl;
	if (this != &obj)
		this->setType(obj._type);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] 🐈Meow" << std::endl;
}
