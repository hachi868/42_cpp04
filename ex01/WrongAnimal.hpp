#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal &obj);
	WrongAnimal &operator = (const WrongAnimal &obj);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};

#endif //__WRONGANIMAL_H__
