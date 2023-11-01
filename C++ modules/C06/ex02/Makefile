# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misha <misha@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 20:17:13 by misha             #+#    #+#              #
#    Updated: 2022/02/01 13:07:24 by misha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  main.cpp Base.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

INCLUDES = A.hpp B.hpp C.hpp

OBJS = $(SRCS:.cpp=.o)

NAME = ex02

$(NAME): $(OBJS) 
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(INCLUDES) Makefile
	$(CC) ${FLAGS} -o $@ -c $<

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re