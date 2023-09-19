//
// Created by hco on 2023/09/20.
//

#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__


class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //__MATERIASOURCE_HPP__
