/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:15:08 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/05 17:57:50 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>

class Replace {

	private :

		std::string _s1;
		std::string _s2;
		std::ofstream *_file;
		int	_handleError(const char *str) const;
	
	public :

		Replace( void );
		~Replace( void );
		int parsing ( int ac, char **av );
};


#endif