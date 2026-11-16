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
	std:: string	_Firstname;
	std:: string	_Lastname;
	std:: string	_Nickname;
	std:: string	_Phonenumber;
	std:: string	_Darkestsecret;
public:
	void		setFirstname(std::string _Firstname);
	std::string	getFirstname() const;
	void		setLastname(std::string _Lastname);
	std::string	getLastname() const;
	void		setNickname(std::string _Nickname);
	std::string	getNickname() const;
	void		setPhonenumber(std::string _Phonenumber);
	std::string	getPhonenumber() const;
	void		setDarkestsecret(std::string _Darkestsecret);
	std::string	getDarkestsecret() const;
};



#endif