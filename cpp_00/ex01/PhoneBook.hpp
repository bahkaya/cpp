/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 23:19:36 by bahkaya           #+#    #+#             */
/*   Updated: 2026/11/15 23:19:36 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cctype>

class PhoneBook
{
private:
	Contact Contacts[8];
	int		Index;
	int		Count;
	int		SyntaxCheck(std::string Name);
	int		PhoneNumberCheck(std::string PhoneNumber);
	void	SearchInput(int Command);
public:
	PhoneBook();
	void	AddContact();
	void	SearchContact();
};


#endif