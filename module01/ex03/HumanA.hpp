/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:53:05 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:09:40 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

	private:

		Weapon* _weapon;
		std::string _name;
		

	public:

		HumanA( std::string name, Weapon &Weapon );
		~HumanA( void );
		void	attack( void );

};

#endif