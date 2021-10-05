/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:02:17 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 10:41:51 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {

	private :

		std::string	_name;

	public :

		Zombie( std::string name );
		~Zombie( void );

		void	announce( void ) const;

};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

