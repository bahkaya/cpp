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
	Contact contacts[8];
	int		index;
	int		count;
	int		sytax_check(std::string name);
	void	search_input(int command);
public:
	PhoneBook();
	void	addContact();
	void	searchContact();
};


#endif