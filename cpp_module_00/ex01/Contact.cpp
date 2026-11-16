/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:49:16 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 08:22:13 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::setFirstname(std::string _firstname)
{
        _Firstname = Firstname;
}
std::string	Contact::getFirstname() const
{
    return(_Firstname);
}
void		Contact::setLastname(std::string _Lastname)
{
    _Lastname = lastname;
}
std::string	Contact::getLastname() const
{
    return (_Lastname);
}
void		Contact::setNickname(std::string _Nickname)
{
    _Nickname = Nickname;
}
std::string	Contact::getNickname() const
{
    return (_Nickname);
}
void		Contact::setPhonenumber(std::string _Phonenumber)
{
    _Phonenumber = phonenumber;
}
std::string	Contact::getPhonenumber() const
{
    return(_Phonenumber);
}
void		Contact::setDarkestsecret(std::string _Darkestsecret)
{
	_Darkestsecret = darkestsecret;
}
std::string	Contact::getDarkestsecret() const
{
	return (_Darkestsecret);
}