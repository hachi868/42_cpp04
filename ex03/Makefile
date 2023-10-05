PROG := ex03

CXX := c++
CXXFLAGS := -Wall -Wextra -Werror
CXXFLAGS += -std=c++98
SRCS =	main.cpp\
		Character.cpp\
		MateriaSource.cpp\
		AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		GiveawayBox.cpp

OBJS := $(SRCS:.cpp=.o)

$(PROG): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

all: $(PROG)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(PROG)

re:	fclean all

.PHONY:	all clean fclean re
