/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 00:27:53 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/03 09:30:26 by lduhamel         ###   ########.fr       */
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
        ~PhoneBook(void);

        void	addContact(void);
        void	searchContact(void);
		void	printDetails(void);
		void	printDetail(std::string detail);
};



#endif