/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:59:48 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 10:43:55 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {
	
	Zombie Lolo("lolo");
	Zombie Mark("Mark");

	Mark.announce();

	Zombie* Elisa = newZombie("Elisa");
	randomChump("Franckie");
	delete Elisa;
	return (0);
}
