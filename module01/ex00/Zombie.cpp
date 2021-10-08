/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:43:31 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 13:40:35 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) { }

Zombie::~Zombie( void ) {

	std::cout << this->_name << " destructor called" << std::endl;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
