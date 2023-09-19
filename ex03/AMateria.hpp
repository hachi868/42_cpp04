//
// Created by hco on 2023/09/20.
//

#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	[...]
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //__AMATERIA_HPP__
