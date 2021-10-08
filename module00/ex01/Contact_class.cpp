/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:48:24 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/04 11:34:29 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact_class.hpp"

Contact::Contact(void) {

	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact(void) {

	std::cout << "Contact destructor called" << std::endl;
}

void    Contact::askDetails(void) {

    std::cout << "What is the first name ?" << std::endl;
    std::cin >> this->firstName;
    std::cout << "What is the last name ?" << std::endl;
    std::cin >> this->lastName;
    std::cout << "What is the nickname ?" << std::endl;
    std::cin >> this->nickname;
    std::cout << "What is the darkest secret ?" << std::endl;
    std::cin >> this->darkestSecret;
    std::cout << "What is the phone number ?" << std::endl;
    std::cin >> this->phoneNumber;
    return;
}

void	Contact::print_each_detail(void) const {
	std::cout << "First name : " << this->firstName << std::endl
		<< "Last name : " << this->lastName << std::endl
		<< "Nickname : " << this->nickname << std::endl
		<< "Darkest secret : " << this->darkestSecret << std::endl
		<< "Phone number : " << this->phoneNumber << std::endl;
}
