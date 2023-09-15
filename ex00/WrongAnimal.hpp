#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal &operator = (const WrongAnimal &obj);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
	void setType(std::string type);
protected:
	std::string _type;
};

#endif //__ANIMAL_H__
