/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisaujogue <mathisaujogue@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:21:19 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/03 14:42:59 by mathisaujog      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstring>
# include <string.h>
# include "contacts.hpp"

# define MAX_CONTACTS 8

class Phonebook
{
    private:
    
        Contacts	_contacts[MAX_CONTACTS];
        int			_nb;
        
        std::string truncInfo(std::string str); 
        void		displayInfo(void);
		
    public:

        Phonebook( void );
        ~Phonebook( void );
        void    addContact(Contacts c);
        void    displayContacts( void );
};

std::string getInput(std::string type);


#endif