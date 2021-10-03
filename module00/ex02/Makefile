# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/03 18:53:42 by lduhamel          #+#    #+#              #
#    Updated: 2021/10/03 18:55:57 by lduhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS  = -Wall -Wextra -Werror

TARGET = account

phonebook: tests.o Account.o 
	$(CC) $(CFLAGS) tests.o Account.o -o account

main.o: tests.cpp
	$(CC) $(CFLAGS) -c tests.cpp

Account.o: Account.cpp
	$(CC) $(CFLAGS) -c Account.cpp

clean:
	rm -rf *.o account