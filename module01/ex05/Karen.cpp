/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:00:58 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/12 11:00:59 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {};

Karen::~Karen( void ) {};

void	Karen::_debug( void ) {

	std::cout << "This is a DEBUG complain" << std::endl;
}

void	Karen::_info( void ) {

	std::cout << "This is an INFO complain" << std::endl;
}

void	Karen::_warning( void ) {

	std::cout << "This is a WARNING complain" << std::endl;
}

void	Karen::_error( void ) {

	std::cout << "This is an ERROR complain" << std::endl;
}

void Karen::complain( std::string level ) {

	const char *list[4] = { "debug", "info", "warning", "error" };
	void (Karen::*fun_ptr_arr[])(void) = { &Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error };

	for (int i = 0; i < 4; i++) {

		if (level.compare(list[i]) == 0)
			(this->*fun_ptr_arr[i])();
	}
}