/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:38:17 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/13 17:25:22 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int _fixedNb;
		const static int _bits;


	public:
		Fixed( void );
		Fixed( Fixed const & copy );
		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		

};

#endif