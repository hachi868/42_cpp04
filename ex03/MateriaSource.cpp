//
// Created by hco on 2023/09/20.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &obj)
{

}

MateriaSource::MateriaSource &operator = (const MateriaSource &obj)
{

}

MateriaSource::~MateriaSource()
{
	std::cout << "[MateriaSource] destructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		if (_memory[i])
			delete _memory[i];
		i++;
	}
}

void MateriaSource::learnMateria(AMateria *materiaNew)
{
	int i = 0;
	while (i < 4)
	{
		if (!_memory[i])
		{
			_memory[i] = materiaNew;
			std::cout << "[MateriaSource] learnMateria : " << _memory[i]->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "[MateriaSource] Can't learn Materia : FULL" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < 4)
	{
		if (_memory[i]->getType() == type)
		{
			std::cout << "[MateriaSource] createMateria : " << type << std::endl;
			return (_memory[i]->clone());
		}
		i++;
	}
	std::cout << "[MateriaSource] Can't create Materia : Don't know." << std::endl;
	return (NULL);
}
