/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduhamel <lduhamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 00:27:53 by lduhamel          #+#    #+#             */
/*   Updated: 2021/10/02 00:49:15 by lduhamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <string>
#include <iostream>

class Phonebook {

    public:

        string			firstName;
		string			lastName;
		string			nickname;
		string			darkestSecrest;
        unsigned int	phoneNumber;

        Phonebook(void);
        ~Phonebook(void);

};



#endif