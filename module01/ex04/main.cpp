/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:11:04 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 18:07:36 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int		handleError(const char *str) {
	
	std::cout << "Error : " << str << std::endl;
	return (0);
}

int		parsing( int ac, char **av ) {

	if (ac != 4)
		return(handleError("wrong number of arguments"));
	std::ifstream ifs(av[1]);
	ifs << "hello";
	return (1);
}

int main (int ac, char **av) {

	if (parsing(ac, av ) == 0)
		return (1);
//	if ()

	return (0);
}