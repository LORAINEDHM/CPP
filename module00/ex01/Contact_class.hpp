/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:23:38 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 00:56:33 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact {

	public:

		std::string		index;
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		darkestSecret;
		std::string		phoneNumber;    

		Contact(void);
		~Contact(void);
		void    askDetails(void);

};

#endif