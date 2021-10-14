/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:06:13 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/14 18:10:52 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	//Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;


	Fixed c(10);
	Fixed d(10);
	Fixed e(5);
	Fixed f(0);

	// if (c.getRawBits() == d.getRawBits())
    //     std::cout << "c == d.\n";
	// else if (c.getRawBits() != d.getRawBits())
	// 	std::cout << "c != d.\n";
	// if (c.getRawBits() != e.getRawBits())
    //     std::cout << "c != e.\n";
	// else if (c.getRawBits() == e.getRawBits())
    //     std::cout << "c == e.\n";
	// if (c.getRawBits() > e.getRawBits())
    //     std::cout << "c > e.\n";
	// else if (c.getRawBits() < e.getRawBits())
    //     std::cout << "c < e.\n";
	// if (c.getRawBits() >= d.getRawBits())
    //     std::cout << "c >= d.\n";
	// if (c.getRawBits() <= d.getRawBits())
    //     std::cout << "c <= d.\n";
	// f = e;
	// std::cout << f << std::endl;
	f = e + d;
	std::cout << f << std::endl;
	return 0;
}