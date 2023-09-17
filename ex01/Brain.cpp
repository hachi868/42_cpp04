#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] constructor called (default)" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "[Brain] copy constructor called" << std::endl;
}

Brain &Brain::operator = (const Brain &obj)
{
	std::cout << "[Brain] assignation operator called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "[Brain] destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

void Brain::setIdea(int index, std::string idea)
{
	int	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea;
		i++;
	}
}
