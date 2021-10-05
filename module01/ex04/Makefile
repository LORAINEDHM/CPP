# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 17:11:21 by lduhamel          #+#    #+#              #
#    Updated: 2021/10/05 18:00:45 by lduhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC = clang++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

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