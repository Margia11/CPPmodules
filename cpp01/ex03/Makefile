# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/02 15:06:17 by andreamargi       #+#    #+#              #
#    Updated: 2023/08/05 12:28:34 by andreamargi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = shooting

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp\

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
