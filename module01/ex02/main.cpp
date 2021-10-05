/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:46:27 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 13:58:52 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ) {

	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	//ptr = str;

	std::cout << "\n******** ADDRESS MEMORY *********\n"
			<< &string << std::endl
			<< stringPTR << std::endl
			<< &stringREF << std::endl;
	
	std::cout << "\n******** STRING *********\n"
			<< *stringPTR << std::endl
			<< stringREF << std::endl;
}
