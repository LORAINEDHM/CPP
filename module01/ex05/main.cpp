/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:36:01 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/12 10:55:13 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( void ) {

	Karen test;

	std::cout << "\n********** level is debug *********\n";
	test.complain("debug");
	std::cout << "\n********** level is error *********\n";
	test.complain("error");
	std::cout << "\n********** level is warning *********\n";
	test.complain("warning");
	std::cout << "\n********** level is info *********\n";
	test.complain("info");
}