#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] constructor called (default)" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj._type)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
	this->_brain = new Brain();
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
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] 🐈Meow" << std::endl;
}

void Cat::showBrainInfo() const
{
	std::cout << "[Cat's brains 🐈🧠] " << this->_brain << std::endl;
}
