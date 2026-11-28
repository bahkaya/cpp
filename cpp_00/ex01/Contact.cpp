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
		Firstname = firstname;
}

std::string	Contact::getFirstname() const
{
	return(Firstname);
}

void		Contact::setLastname(std::string lastname)
{
	Lastname = lastname;
}

std::string	Contact::getLastname() const
{
	return (Lastname);
}

void		Contact::setNickname(std::string nickname)
{
	Nickname = nickname;
}

std::string	Contact::getNickname() const
{
	return (Nickname);
}

void		Contact::setPhonenumber(std::string phonenumber)
{
	Phonenumber = phonenumber;
}

std::string	Contact::getPhonenumber() const
{
	return(Phonenumber);
}

void		Contact::setDarkestsecret(std::string darkestsecret)
{
	Darkestsecret = darkestsecret;
}

std::string	Contact::getDarkestsecret() const
{
	return (Darkestsecret);
}