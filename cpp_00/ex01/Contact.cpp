/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 07:49:16 by codespace         #+#    #+#             */
/*   Updated: 2026/11/28 15:54:06 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::SetFirstName(std::string CreateName)
{
		FirstName = CreateName;
}

std::string	Contact::GetFirstName() const
{
	return (FirstName);
}

void		Contact::SetLastName(std::string CreateLastName)
{
	LastName = CreateLastName;
}

std::string	Contact::GetLastName() const
{
	return (LastName);
}

void		Contact::SetNickname(std::string CreateNickname)
{
	Nickname = CreateNickname;
}

std::string	Contact::GetNickname() const
{
	return (Nickname);
}

void		Contact::SetPhoneNumber(std::string CreatePhoneNumber)
{
	PhoneNumber = CreatePhoneNumber;
}

std::string	Contact::GetPhoneNumber() const
{
	return (PhoneNumber);
}

void		Contact::SetDarkestSecret(std::string CreateDarkestSecret)
{
	DarkestSecret = CreateDarkestSecret;
}

std::string	Contact::GetDarkestSecret() const
{
	return (DarkestSecret);
}