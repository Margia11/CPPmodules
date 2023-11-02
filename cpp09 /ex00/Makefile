# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andreamargiacchi <andreamargiacchi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 11:54:43 by andreamargi       #+#    #+#              #
#    Updated: 2023/10/26 16:20:04 by andreamargi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

FILES = BitcoinExchange.cpp main.cpp  \

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
