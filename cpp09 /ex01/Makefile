# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 11:54:43 by andreamargi       #+#    #+#              #
#    Updated: 2023/11/02 12:51:58 by andreamargi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = RPN.cpp main.cpp \

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
