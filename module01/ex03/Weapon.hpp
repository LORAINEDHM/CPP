/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:29:17 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 16:39:52 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

	private :

		std::string _type;

	public :

		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		const std::string&	getType( void ) const;
		void	setType( std:: string type );
};




#endif