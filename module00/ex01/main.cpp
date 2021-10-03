/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 13:27:42 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 18:09:25 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact_class.hpp"
#include "PhoneBook_class.hpp"

int		main(void) {

	std::string		cmd;
	PhoneBook		phonebook;

	phonebook.nb = 0;
    while (phonebook.nb >= 0)
    {
        std::cout << "Enter one of the following commands :\n- ADD\n- SEARCH \n- EXIT" << std::endl;
        std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
			phonebook.addContact();
		else if (cmd.compare("SEARCH") == 0)
				phonebook.searchContact();
		else if (cmd.compare("EXIT") == 0)
            break;
    }
}