/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:02:17 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 13:43:17 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

	private :

		std::string	_name;

	public :

		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );

		void	announce( void ) const;
		void	setName( std::string name );

};

Zombie* zombieHorde ( int N, std::string name );

