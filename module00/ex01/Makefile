# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/02 13:24:27 by lduhamel          #+#    #+#              #
#    Updated: 2021/10/02 19:45:07 by lduhamel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS  = -Wall -Wextra -Werror

TARGET = phonebook

phonebook: main.o Contact_class.o PhoneBook_class.o
	$(CC) $(CFLAGS) main.o Contact_class.o PhoneBook_class.o -o phonebook

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Contact_class.o: Contact_class.cpp
	$(CC) $(CFLAGS) -c Contact_class.cpp

PhoneBook_class.o: PhoneBook_class.cpp
	$(CC) $(CFLAGS) -c PhoneBook_class.cpp

clean:
	rm -rf *.o phonebook