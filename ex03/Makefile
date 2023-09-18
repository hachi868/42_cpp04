PROG := ex03

CXX := c++
FLAGS := -Wall -Wextra -Werror
FLAGS_ADD := -std=c++98
SRCS =	main.cpp

OBJS := $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(FLAGS) $(FLAGS_ADD) -c $< -o $@

$(PROG): $(OBJS)
	$(CXX) $(FLAGS) $(FLAGS_ADD) -o $@ $(OBJS)

all: $(PROG)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(PROG)

re:	fclean all

.PHONY:	all clean fclean re
