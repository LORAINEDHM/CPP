/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:43:31 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/04 18:04:50 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {

//	std::cout << "Contact constructor called" << std::endl;
}

Zombie::~Zombie( void ) {

	std::cout << this->_name << " destructor called" << std::endl;
}

void	Zombie::announce( void ) const {

	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name ) {

	Zombie* zombie = new Zombie(name);
	//zombie->announce();
	return (zombie); 
}

void	randomChump( std::string name ) {

	//Zombie* zombie = new Zombie(name);
	Zombie* zombie = zombie->newZombie(name);
	zombie->announce();
}
