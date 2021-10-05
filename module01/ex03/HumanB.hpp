/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:20:02 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:24:56 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

	private:

		Weapon* _weapon;
		std::string _name;
		

	public:

		HumanB( std::string name);
		~HumanB( void );
		void	setWeapon( Weapon &weapon );
		void	attack( void );

};

#endif