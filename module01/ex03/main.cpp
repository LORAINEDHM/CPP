/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:48:39 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:38:44 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main( void ) {
	
	std::cout << "\n******** HUMAN A ********" << std::endl;

	Weapon	club = Weapon("crude spiked club");

	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	std::cout << "\n******** HUMAN B ********" << std::endl;

	Weapon club2 = Weapon("crude spiked club");
	
	HumanB jim("Jim");
	jim.setWeapon( club2 );
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();

	std::cout << std::endl;
	

}