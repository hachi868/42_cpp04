#ifndef __BRAIN_H__
#define __BRAIN_H__

class Brain {
public:
	Brain();
	Brain(const Brain &obj);
	Brain &operator = (const Brain &obj);
	~Brain();
	std::string getIdea(int index) const;
	void setIdea(int index, std::string idea);
	void setIdeaWhile(std::string idea);

protected:
	std::string _ideas[100];
};

#endif //__BRAIN_H__
