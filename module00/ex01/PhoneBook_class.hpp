/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 00:27:53 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 17:29:51 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include <iostream>
#include "Contact_class.hpp"

class PhoneBook {

    public:

        Contact contacts[8];
        int     nb;
        
        PhoneBook(void);
        ~PhoneBook();

		void	addContact(void);
        void	searchContact(void);
	
	private:

		void	_printDetails(void);
		void	_printDetail(std::string detail);
};



#endif