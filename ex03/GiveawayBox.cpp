#include "GiveawayBox.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[34m";

Node::Node(AMateria *materia) :  _next(NULL), _materia(materia)
{
	std::cout << DEBUG << "[Node] constructor called (materia)" << RESET << std::endl;
}

Node::~Node()
{
	std::cout << DEBUG << "[Node] destructor called" << std::endl;
	delete this->_materia;
}

GiveawayBox::GiveawayBox() : _head(NULL)
{
	std::cout << "\033[90m" << "[GiveawayBox] constructor called (default)" << "\033[0m" << std::endl;
}

GiveawayBox::~GiveawayBox()
{
	std::cout << DEBUG << "[GiveawayBox] destructor called" << RESET << std::endl;
}

void GiveawayBox::addMateria(AMateria *materia)
{
	Node* newNode = new Node(materia);
	if (!_head)
		_head = newNode;
	else
	{
		Node* temp = _head;
		while (temp->_next) {
			temp = temp->_next;
		}
		temp->_next = newNode;
	}
}

void GiveawayBox::showList() const
{
	Node* temp = _head;
	while (temp) {
		std::cout << temp->_materia->getType() << " > ";
		temp = temp->_next;
	}
	std::cout << std::endl;
}
