/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:36:01 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/12 11:54:17 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


void	Karen::filter( int index ) {

	switch(index) {
		case 0 :
			this->_debug();
		case 1 :
			this->_info();
		case 2 :
			this->_warning();
		case 3 :
			this->_error();
			break;
		case 4 :
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
		}
}


int main( int ac, char **av ) {

	if (!(ac == 2)) {
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	Karen filter;
	const char *list[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	std::string complain = av[1];
	int index = 0;
	while (index < 4) {
		if (complain.compare(list[index]) == 0)
			break;
		index++;
	}
	filter.filter(index);
	return (0);
}
