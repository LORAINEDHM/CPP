/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:23:38 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 00:32:28 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact {

	public:

		// char            index[2];
		// char			firstName[30];
		// char			lastName[30];
		// char			nickname[30];
		// char			darkestSecret[30];
		// char            phoneNumber[30];
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