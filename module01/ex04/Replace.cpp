/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:42:17 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 17:57:20 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace( void ) {};

Replace::~Replace( void ) {};


int		Replace::parsing( int ac, char **av ) {

	if (ac != 4)
		return(this->_handleError("wrong number of arguments"));
	this->_file = av[1];
	this->_file(av[1]);
	this->_file << "hello";
	return (1);
}

int		Replace::_handleError(const char *str) const {
	
	std::cout << "Error : " << str << std::endl;
	return (0);
}
