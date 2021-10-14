/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:04:08 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/14 18:06:35 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int _fixedNb;
		const static int _bits;


	public:
		Fixed( void );
		Fixed( const int integer );
		Fixed( const float floating );
		Fixed( Fixed const & copy );
		~Fixed( void );

		Fixed &		operator=( const Fixed& rhs );
		Fixed 		operator+( const Fixed& rhs) const;
		Fixed 		operator-( const Fixed& rhs) const;

		bool		operator>( const Fixed& rhs ) const;
		bool		operator<( const Fixed& rhs ) const; 
		bool		operator>=( const Fixed& rhs ) const; 
		bool		operator<=( const Fixed& rhs ) const;  
		bool		operator==( const Fixed& rhs ) const;
		bool		operator!=( const Fixed& rhs ) const;


		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

};

std::ostream &operator<<(std::ostream &o, Fixed const & rhs );

#endif