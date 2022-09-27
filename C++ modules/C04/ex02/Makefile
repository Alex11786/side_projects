SRCS = main.cpp AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp
OBJS = $(SRCS:.cpp=.o)
NAME = Abstract

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADER) Makefile
	$(CC) ${FLAGS} -o $@ -c $<

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re