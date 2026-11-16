/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:49:16 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 08:27:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::setFirstname(std::string firstname)
{
        _Firstname = firstname;
}
std::string	Contact::getFirstname() const
{
    return(_Firstname);
}
void		Contact::setLastname(std::string lastname)
{
    _Lastname = lastname;
}
std::string	Contact::getLastname() const
{
    return (_Lastname);
}
void		Contact::setNickname(std::string nickname)
{
    _Nickname = nickname;
}
std::string	Contact::getNickname() const
{
    return (_Nickname);
}
void		Contact::setPhonenumber(std::string phonenumber)
{
    _Phonenumber = phonenumber;
}
std::string	Contact::getPhonenumber() const
{
    return(_Phonenumber);
}
void		Contact::setDarkestsecret(std::string darkestsecret)
{
	_Darkestsecret = darkestsecret;
}
std::string	Contact::getDarkestsecret() const
{
	return (_Darkestsecret);
}