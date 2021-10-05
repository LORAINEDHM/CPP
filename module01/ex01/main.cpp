/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:59:48 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 13:36:30 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main( void ) {
	
	int	n = 10;

	Zombie* horde = zombieHorde (n, "MIckael" );
	for (int i = 0; i < n; i++) {
    	horde[i].announce();
	}
	delete [] horde;
	return (0);
}
