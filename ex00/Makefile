PROG := ex00

COMPILER := c++
FLAGS := -Wall -Wextra -Werror
FLAGS_ADD := -std=c++98
SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJS := $(SRCS:.cpp=.o)

%.o: %.cpp
	$(COMPILER) $(FLAGS) $(FLAGS_ADD) -c $< -o $@

$(PROG): $(OBJS)
	$(COMPILER) $(FLAGS) $(FLAGS_ADD) -o $@ $(OBJS)

all: $(PROG)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(PROG)

re:	fclean all

.PHONY:	all clean fclean re
