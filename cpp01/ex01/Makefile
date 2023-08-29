# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 11:26:21 by andreamargi       #+#    #+#              #
#    Updated: 2023/08/02 11:30:58 by andreamargi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Horde

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Zombie.cpp zombieHorde.cpp\

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
