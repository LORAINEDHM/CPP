/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:27:09 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 13:41:47 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName( std::string name ) {

	this->_name = name;
}


Zombie*		zombieHorde ( int N, std::string name ) {

	Zombie *zombie = new Zombie[N];
	 for (int i = 0; i < N; i++) {
        zombie[i].setName(name);
    }
	return (zombie);
}