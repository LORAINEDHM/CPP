/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:00:58 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/12 11:54:34 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {};

Karen::~Karen( void ) {};

void	Karen::_debug( void ) {

	std::cout << "[ DEBUG ]\nThis is a DEBUG complain\n" << std::endl;
}

void	Karen::_info( void ) {

	std::cout << "[ INFO ]\nThis is an INFO complain\n" << std::endl;
}

void	Karen::_warning( void ) {

	std::cout << "[ WARNING ]\nThis is a WARNING complain\n" << std::endl;
}

void	Karen::_error( void ) {

	std::cout << "[ ERROR ]\nThis is an ERROR complain\n" << std::endl;
}
