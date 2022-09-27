NAME	=	Fixed
SRCS	=	Fixed.cpp main.cpp
OBJS	= 	${SRCS:%.cpp=%.o}
HEADER	=	Fixed.hpp
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re