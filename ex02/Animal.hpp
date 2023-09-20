#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class Animal {
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal &obj);
	Animal &operator = (const Animal &obj);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	virtual void showBrainInfo() const = 0;
	std::string getType() const;

protected:
	std::string _type;
};

#endif //__ANIMAL_H__
