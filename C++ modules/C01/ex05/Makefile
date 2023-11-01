NAME	 =	Harl
CC =	clang++
CFLAGS	 =	-Wall -Wextra -Werror -std=c++98
HEADER = Harl.hpp
SRCS		 =	main.cpp Harl.cpp
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
