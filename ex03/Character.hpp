#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"
#include "GiveawayBox.hpp"

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(const Character &obj);
	Character &operator = (const Character &obj);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
	static GiveawayBox _giveaway;

private:
	Character();
	std::string _name;
};

#endif //__CHARACTER_HPP__
