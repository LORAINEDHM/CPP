# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 13:24:27 by lduhamel          #+#    #+#              #
#    Updated: 2021/10/04 11:31:50 by lduhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = phonebook
CC = clang++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Contact_class.cpp PhoneBook_class.cpp

OBJS = ${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all