//
// Created by hco on 2023/09/20.
//

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__


class ICharacter {
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


#endif //__CHARACTER_HPP__
