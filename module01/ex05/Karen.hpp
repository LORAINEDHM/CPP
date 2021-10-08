/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:36:15 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/06 16:04:34 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>


class	Karen {

	private:

		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

	public:

		Karen( void );
		~Karen( void );
		void	complain( std::string level );
}



#endif