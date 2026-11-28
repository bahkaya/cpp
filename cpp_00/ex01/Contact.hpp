/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 22:58:33 by bahkaya           #+#    #+#             */
/*   Updated: 2026/11/15 22:58:33 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	void		SetFirstName(std::string FirstName);
	std::string	GetFirstName() const;
	void		SetLastName(std::string LastName);
	std::string	GetLastName() const;
	void		SetNickname(std::string Nickname);
	std::string	GetNickname() const;
	void		SetPhoneNumber(std::string PhoneNumber);
	std::string	GetPhoneNumber() const;
	void		SetDarkestSecret(std::string DarkestSecret);
	std::string	GetDarkestSecret() const;
};



#endif