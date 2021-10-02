/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:48:24 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/02 19:43:43 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact_class.hpp"

Contact::Contact(void) {

	std::cout << "Contact constructor called" << std::endl;
	return;
}

Contact::~Contact(void) {

	std::cout << "Contact destructor called" << std::endl;
	return;
}

void    Contact::askDetails(void) {

    std::cout << "What is the first name ?" << std::endl;
    std::cin >> this->firstName;
   // std::cout << this->firstName << std::endl;
    std::cout << "What is the last name ?" << std::endl;
    std::cin >> this->lastName;
    //std::cout << this->lastName << std::endl;
    std::cout << "What is the nickname ?" << std::endl;
    std::cin >> this->nickname;
    //std::cout << this->nickname << std::endl;
    std::cout << "What is the darkest secret ?" << std::endl;
    std::cin >> this->darkestSecret;
    //std::cout << this->darkestSecret << std::endl;
    std::cout << "What is the phone number ?" << std::endl;
    std::cin >> this->phoneNumber;
    //std::cout << this->phoneNumber << std::endl;
    return;
}
