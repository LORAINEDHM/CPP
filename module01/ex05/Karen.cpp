/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:00:58 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/12 11:48:36 by lduhamel         ###   ########.fr       */
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

void Karen::complain( std::string level ) {

	const char *list[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Karen::*fun_ptr_arr[])(void) = { &Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error };

	for (int i = 0; i < 4; i++) {

		if (level.compare(list[i]) == 0)
			(this->*fun_ptr_arr[i])();
	}
}