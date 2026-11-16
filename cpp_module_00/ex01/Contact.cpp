/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:49:16 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 08:16:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::setFirstname(std::string _firstname)
{
        _Firstname = name;
}
std::string	Contact::getFirstname() const
{
    return(_Firstname);
}
void		Contact::setLastname(std::string _Lastname)
{
    _Lastname = lastname;
}
std::string	getLastname() const
{
    return (_Lastname);
}
void		Contact::setNickname(std::string _Nickname)
{
    _Nickname = Nickname;
}
std::string	getNickname() const
{
    return (_Nickname);
}
void		Contact::setPhonenumber(std::string _Phonenumber)
{
    _Phonenumber = phonenumber;
}
std::string	getPhonenumber() const
{
    return(_Phonenumber);
}
void		setDarkestsecret(std::string _Darkestsecret)
{
	_Darkestsecret = darkestsecret;
}
std::string	getDarkestsecret() const
{
	return (_Darkestsecter);
}