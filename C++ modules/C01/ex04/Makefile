NAME	 =	Sed
CC =	clang++
CFLAGS	 =	-Wall -Wextra -Werror -std=c++98
HEADER = sed.hpp
SRCS		 =	main.cpp
OBJS		 =	$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):  $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
