/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:36:01 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/12 11:55:19 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void ) {

	Karen test;

	std::cout << "********** level is debug *********\n";
	test.complain("DEBUG");
	std::cout << "********** level is error *********\n";
	test.complain("ERROR");
	std::cout << "********** level is warning *********\n";
	test.complain("WARNING");
	std::cout << "********** level is info *********\n";
	test.complain("INFO");
}