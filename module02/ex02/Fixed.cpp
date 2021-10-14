/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:04:23 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/14 18:12:50 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

/*
******************* CONSTRUCTORS *******************
*/

Fixed::Fixed( void ) : _fixedNb( 0 ) {

	std::cout << "Default Construtor called" << std::endl;
	return;
}

Fixed::Fixed( const int integer ) : _fixedNb(integer << Fixed::_bits) {

	std::cout << "Int construtor called" << std::endl;
	return ;
}

Fixed::Fixed( const float floating ) : _fixedNb( roundf(floating * (1 << Fixed::_bits)) ) {

	std::cout << "Float construtor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & copy ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

/*
********************* DESTRUCTOR *********************
*/

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

/*
*********************** OVERLOADS *********************
*/

/*
**  ARITHMETIC
*/


Fixed &		Fixed::operator=( const Fixed& rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	this->_fixedNb = rhs._fixedNb;
	return *this;
}

std::ostream & operator<<( std::ostream &o, Fixed const & rhs ) {
	return (o << rhs.toFloat());
}

Fixed		Fixed::operator+( const Fixed& rhs) const {

	return Fixed(this->_fixedNb + rhs._fixedNb);
}

Fixed		Fixed::operator-( const Fixed& rhs) const {

	return Fixed(this->_fixedNb - rhs._fixedNb);
}


/*
**  COMPARISON
*/


bool Fixed::operator>( const Fixed& rhs ) const {
    return (this->_fixedNb > rhs._fixedNb);
}

bool Fixed::operator<( const Fixed& rhs ) const {
    return (this->_fixedNb < rhs._fixedNb);
}

bool Fixed::operator>=( const Fixed& rhs ) const {
    return (this->_fixedNb >= rhs._fixedNb);
}

bool Fixed::operator<=( const Fixed& rhs ) const {
    return (this->_fixedNb <= rhs._fixedNb);
}

bool Fixed::operator==( const Fixed& rhs ) const {
    return (this->_fixedNb == rhs._fixedNb);
}

bool Fixed::operator!=( const Fixed& rhs ) const {
    return (this->_fixedNb != rhs._fixedNb);
}

/*
*********************** FUNCTIONS *********************
*/

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedNb);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNb = raw;
	return;
}

float	Fixed::toFloat( void ) const {

	return (this->_fixedNb / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt( void ) const {

	return (this->_fixedNb >> Fixed::_bits);
}