NAME = easyfind
SRCS =  main.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
HEADER = easyfind.hpp
OBJS = $(SRCS:.cpp=.o)

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