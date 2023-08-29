# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 11:19:35 by andreamargi       #+#    #+#              #
#    Updated: 2023/08/28 15:43:52 by andreamargi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Dog.cpp Cat.cpp \

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
