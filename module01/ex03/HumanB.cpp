/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:18:50 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:25:41 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	
	std::cout << name << " constructor called" << std::endl;
}

HumanB::~HumanB( void ) {

	std::cout << this->_name << " destructor called" << std::endl;
}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {

	this->_weapon = &weapon;
}
