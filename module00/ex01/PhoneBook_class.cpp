/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 19:42:13 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/04 11:33:52 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "PhoneBook_class.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "PhoneBook constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::addContact() {

	if (this->nb == 8)
		std::cout << "PhoneBook is full (max 8 contacts)" << std::endl;
	else {
		this->contacts[this->nb].index.push_back((this->nb + 1) + '0');
		this->contacts[this->nb].askDetails();
		this->nb++;
	}
	return;
}

void	PhoneBook::searchContact(void) {

	std::string index;
	
	if (this->nb == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	else {
		_printDetails();
		std::cout << "Details from which contact do you want to see ? (enter the index)" << std::endl;
		std::cin >> index;		
		for (int i = 0; i < this->nb; i++) {
			if (index.compare(this->contacts[i].index) == 0) {
				this->contacts[i].print_each_detail();
				return;
			}
		}
		std::cout << "Contact doesn't exist" << std::endl;
	}
	return;
}

void	PhoneBook::_printDetail(std::string detail) {
	
	std::cout << std::setw(10);
	if (detail.length() > 10)
	{
		detail.resize(9);
		detail.resize(10, '.');
	}
	std::cout << detail;
	return;
}

void	PhoneBook::_printDetails() {
	
	for (int i = 0; i < this->nb; i++) {
		std::cout << "|";
		_printDetail(this->contacts[i].index);
		std::cout << "|";
		_printDetail(this->contacts[i].firstName);
		std::cout << "|";
		_printDetail(this->contacts[i].lastName);
		std::cout << "|";
		_printDetail(this->contacts[i].nickname);
		std::cout << "|";
		std::cout << std::endl;
	}
	return;
}
