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
	Contact _contacts[8];
	int		_index;
	int		_count;
	void	searchContact();
	void	search_input(int command);
public:
	
	PhoneBook();
	void	addContact();

	int		sytax_check(std::string name);
};


#endif