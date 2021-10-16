/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:06:13 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/15 23:55:37 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );


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
	Fixed g(2);

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

	//  [ + ]
	f = e + d;
	std::cout << e.toInt() << " + " << d.toInt() << " = " << f.toInt() << std::endl;
	// f = e.toInt() + d.toInt();
	// std::cout << e.toInt() << " + " << d.toInt() << " = " << f.toInt() << std::endl;

	//  [ - ]
	d = f.toInt() - e.toInt();
	std::cout << f.toInt() << " - " << e.toInt() << " = " << d.toInt() << std::endl;

	// [ / ]
	f = d.toInt() / g.toInt();
	std::cout << d.toInt() << " / " << g.toInt() << " = " << f.toInt() << std::endl;
	f = e.toInt() / g.toInt();
	std::cout << e.toInt() << " / " << g.toInt() << " = " << f.toFloat() << std::endl;


	return 0;
}


// int main(void) {

// 	Fixed a;
// 	Fixed const b(10);
// 	Fixed const c(42.42f);
// 	Fixed const d(b);
	
// 	a = Fixed(1234.4321f);

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;

// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	

// 	return 0;
// }