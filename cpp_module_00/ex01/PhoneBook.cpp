/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:43:18 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 14:59:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_index = 0;
	_count = 0;
}
void	PhoneBook::addContact()
{
	std::string name;

	std::cout << "First Name: ";
	std::getline(std::cin, name);
	_contacts[_index].setFirstname(name);

	std::cout << "Last Name: ";
	std::getline(std::cin, name);
	_contacts[_index].setLastname(name);

	std::cout << "Nick Name: ";
	std::getline(std::cin, name);
	_contacts[_index].setNickname(name);

	std::cout << "Phone Number: ";
	std::getline(std::cin, name);
	_contacts[_index].setPhonenumber(name);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, name);
	_contacts[_index].setDarkestsecret(name);

	_index++;
	if(_index % 8 == 0)
		_index = 0;
	if(_count < 8)
		_count++;
}

void	PhoneBook::searchContact()
{
	int	i;

	i = 0;
	std::cout << std::setw(10) << "Index" << "|" << "First Name" << "|" << "Last Name" << "|" << "Nick Name" << "|" << std::endl;
	while(i != _count)
	{
		std::cout << i;
		std::cout << std::setw(10) << _contacts[i].getFirstname().substr(0, 9);
		std::cout << std::setw(10) << _contacts[i].getLastname().substr(0,9);
		std::cout << std::setw(10) << _contacts[i].getNickname().substr(0,9) << std::endl;
		i++;
	}
	
}