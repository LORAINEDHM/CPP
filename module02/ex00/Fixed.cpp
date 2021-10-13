/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:50:15 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/13 17:27:21 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedNb( 0 ) {

	std::cout << "Default Construtor called" << std::endl;
	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & copy ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &		Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;
	_fixedNb = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return(this->_fixedNb);
}

void		Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedNb = raw;
	return;
}