/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisaujogue <mathisaujogue@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:21:19 by mathisaujog       #+#    #+#             */
/*   Updated: 2023/10/03 10:55:16 by mathisaujog      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <cstring>
#include <string.h>
    
class Contacts
{

    public:

        Contacts();
        ~Contacts( void );
    
        std::string getNumber( void ) const;
        std::string getFirstName( void ) const;
        std::string getLastName( void ) const;
        std::string getNickName( void ) const;
        std::string getSecret( void ) const;
        void setNumber(std::string nb);
        void setFirstName(std::string nb);
        void setLastName(std::string nb);
        void setNickName(std::string nb);
        void setSecret(std::string nb);
        
    private:

        std::string _phoneNumber;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _darkestSecret;
};



#endif