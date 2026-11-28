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
	std:: string	Firstname;
	std:: string	Lastname;
	std:: string	Nickname;
	std:: string	Phonenumber;
	std:: string	Darkestsecret;
public:
	void		setFirstname(std::string Firstname);
	std::string	getFirstname() const;
	void		setLastname(std::string Lastname);
	std::string	getLastname() const;
	void		setNickname(std::string Nickname);
	std::string	getNickname() const;
	void		setPhonenumber(std::string Phonenumber);
	std::string	getPhonenumber() const;
	void		setDarkestsecret(std::string Darkestsecret);
	std::string	getDarkestsecret() const;
};



#endif