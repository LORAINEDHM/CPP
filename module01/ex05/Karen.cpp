/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:00:58 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/06 16:08:51 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void ) {};

Karen::~Karen( void ) {};

void	Karen::_debug( void ) {

	
}

void Karen::complain( std::string level ) {

	if (level.compare("DEBUG") == 0)
		this->_debug();
	else if (level.compare("INFO") == 0)
		this->_info();
	else if (level.compare("WARNING") == 0)
		this->_warning();
	else if (level.compare("ERROR") == 0)
		this->_error();
	else
		std::cout << "Error: Level not found" << std::endl;
}