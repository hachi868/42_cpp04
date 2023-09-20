#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character();
	Character(const Character &obj);
	Character(std::string name);
	Character &operator=(const Character &obj);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, Character &target);

private:
	std::string _name;
};

#endif //__CHARACTER_HPP__
