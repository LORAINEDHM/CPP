/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:27:42 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 00:51:29 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
//#include <string>
#include <iomanip>
#include "Contact_class.hpp"
#include "PhoneBook_class.hpp"

// void	print_detail(char *detail) {
	
// 	int		len;
// 	int		detail_index;
// 	int		buff_index;
// 	char	buff[11];

// 	len = std::strlen(detail);
// 	buff_index = 9;
// 	if (len > 10)
// 	{
// 		detail_index = 8;
// 		buff[buff_index--] = (char)'.';
// 	}
// 	else
// 		detail_index = len - 1;
// 	while (detail_index >= 0)
// 		buff[buff_index--] = detail[detail_index--];
// 	while (buff_index >= 0)
// 		buff[buff_index--] = (char)' ';
// 	buff[10] = '\0';
// 	std::cout << buff;
// }

// void	print_detail(char *detail) {
	
// 	std::cout << std::setw(10);
// 	if (std::strlen(detail) > 10)
// 	{
// 		detail[9] = '.';
// 		detail[10] = '\0';
// 	}
// 	std::cout << detail;
// }


void	print_detail(std::string detail) {
	
	std::cout << std::setw(10);
	if (detail.length() > 10)
	{
		detail.resize(9);
		detail.resize(10, '.');
		// detail[9] = '.';
		// detail[10] = '\0';
	}
	std::cout << detail;
}

void	print_details(PhoneBook phonebook, int n) {
	
	for (int i = 0; i < n - 1; i++) {
		std::cout << "|";
		print_detail(phonebook.contacts[i].index);
		std::cout << "|";
		print_detail(phonebook.contacts[i].firstName);
		std::cout << "|";
		print_detail(phonebook.contacts[i].lastName);
		std::cout << "|";
		print_detail(phonebook.contacts[i].nickname);
		std::cout << "|";
		std::cout << std::endl;
	}
}


int		main(void) {

    char 	cmd[100];
	int		n;


	n = 1;
	PhoneBook phonebook;
    while (n)
    {
        std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
        std::cin >> cmd;
        std::cout << cmd << std::endl;
        if (std::strcmp(cmd, "ADD") == 0) {
			if (n == 9)
				std::cout << "PhoneBook is full (max 8 contacts)" << std::endl;
			else {
            	std::cout << "Go to ADD function" << std::endl;
				Contact newone;
				newone.index.push_back(n + '0');
				//newone.index.push = '\0';
				// newone.index[0] = n + '0';
				// newone.index[1] = '\0';
				newone.askDetails();
				phonebook.contacts[n - 1] = newone;
				n++;
			}
		}
        else if (std::strcmp(cmd, "SEARCH") == 0)
		{
            std::cout << "Go to SEARCH function" << std::endl;
			print_details(phonebook, n);
			std::cout << "Details from which index do you want to see ?" << std::endl;
		}
        else if (std::strcmp(cmd, "EXIT") == 0)
            std::cout << "Go to EXIT function" << std::endl;
        // else
        //     std::cout << "Command not found. Try again" << std::endl;
    }
}
