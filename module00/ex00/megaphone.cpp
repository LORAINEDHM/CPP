/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:20:11 by lduhamel          #+#    #+#             */
/*   Updated: 2021/09/30 16:20:25 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>



int		main(int ac, char **av) {	
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < ac; i++) {
			for (size_t j=0; j < strlen(av[i]); j++) {
				putchar(toupper(av[i][j]));
			}
			if (i != ac - 1)
				putchar(toupper(' '));
			else
				std::cout << std::endl;
		}
	}
}
