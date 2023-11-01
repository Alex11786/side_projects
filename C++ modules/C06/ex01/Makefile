# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misha <misha@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 20:17:13 by misha             #+#    #+#              #
#    Updated: 2022/02/01 12:02:05 by misha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = data
SRCS =  main.cpp Data.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror
HEADER = Data.hpp
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