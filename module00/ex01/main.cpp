/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:27:42 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 10:36:31 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact_class.hpp"
#include "PhoneBook_class.hpp"

int		main(void) {

    char 	cmd[100];
	PhoneBook phonebook;

	phonebook.nb = 0;
    while (phonebook.nb >= 0)
    {
        std::cout << "Enter ADD, SEARCH or EXIT" << std::endl;
        std::cin >> cmd;
        std::cout << cmd << std::endl;
        if (std::strcmp(cmd, "ADD") == 0)
			phonebook.addContact();
        else if (std::strcmp(cmd, "SEARCH") == 0)
				phonebook.searchContact();
        else if (std::strcmp(cmd, "EXIT") == 0)
            std::cout << "Go to EXIT function" << std::endl;
    }
}
