NAME = ClapTrap
SRCS = main.cpp ClapTrap.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = ClapTrap.hpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) ${FLAGS} -o $@ -c $<

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re