# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 15:37:34 by lduhamel          #+#    #+#              #
#    Updated: 2021/09/30 15:54:16 by lduhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS  = -Wall -Wextra -Werror

TARGET = megaphone

megaphone: megaphone.o
	$(CC) $(CFLAGS) megaphone.o -o megaphone

megaphone.o: megaphone.cpp
	$(CC) $(CFLAGS) -c megaphone.cpp

clean:
	rm -rf *.o megaphone