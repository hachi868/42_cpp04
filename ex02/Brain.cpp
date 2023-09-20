#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] constructor called (default)" << std::endl;
	this->setIdeaWhile("ideaTxt");
}

Brain::Brain(const Brain &obj)
{
	std::cout << "[Brain] copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator = (const Brain &obj)
{
	std::cout << "[Brain] assignation operator called" << std::endl;
	if (this != &obj)
	{
		int i = 0;
		while (i < 100)
		{
			this->_ideas[i] = obj._ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

void Brain::setIdeaWhile(std::string idea)
{
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea + std::to_string(i);
		i++;
	}
}
