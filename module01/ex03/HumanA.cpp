/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:52:50 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:11:13 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(&weapon) {
	
	std::cout << name << " constructor called" << std::endl;
}

HumanA::~HumanA( void ) {

	std::cout << this->_name << " destructor called" << std::endl;
}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
