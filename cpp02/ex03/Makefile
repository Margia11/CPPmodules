# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/17 12:36:54 by andreamargi       #+#    #+#              #
#    Updated: 2023/08/17 15:09:06 by andreamargi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed4

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Fixed.cpp bsp.cpp Point.cpp \

OBJ=$(FILES:.cpp=.o)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(FILES) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
