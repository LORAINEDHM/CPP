/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:29:15 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:39:22 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) { 

	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon( std::string type ) : _type(type) { 

	std::cout << this->_type << " constructor called" << std::endl;
}

Weapon::~Weapon( void ) {

	std::cout << this->_type << " destructor called" << std::endl;
}

const std::string&	Weapon::getType( void ) const {
	
	return (this->_type);
}

void	Weapon::setType( std::string type) { 

	this->_type = type;
}