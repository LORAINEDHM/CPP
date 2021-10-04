# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 18:53:42 by lduhamel          #+#    #+#              #
#    Updated: 2021/10/04 11:39:26 by lduhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CC = clang++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp

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