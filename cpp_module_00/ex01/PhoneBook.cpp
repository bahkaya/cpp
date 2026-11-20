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
	if (!sytax_check(name))
		PhoneBook::addContact();
	_contacts[_index].setFirstname(name);

	std::cout << "Last Name: ";
	std::getline(std::cin, name);
	if (!sytax_check(name))
		PhoneBook::addContact();
	_contacts[_index].setLastname(name);

	std::cout << "Nick Name: ";
	std::getline(std::cin, name);
	if (!sytax_check(name))
		PhoneBook::addContact();
	_contacts[_index].setNickname(name);

	std::cout << "Phone Number: ";
	std::getline(std::cin, name);
	if (!sytax_check(name))
		PhoneBook::addContact();
	_contacts[_index].setPhonenumber(name);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, name);
	if (!sytax_check(name))
		PhoneBook::addContact();
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
	std::string command;

	i = 0;
	std::cout	<< std::setw(10) << "Index" << "|" 
				<< std::setw(10) << "First Name" << "|" 
				<< std::setw(10) << "Last Name" << "|" 
				<< std::setw(10) << "Nick Name" << std::endl;
	while(i != _count)
	{
		std::cout << std::setw(10) << i << "|";
		if (_contacts[i].getFirstname().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getFirstname().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << _contacts[i].getFirstname()<< "|";
		if (_contacts[i].getLastname().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getLastname().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << _contacts[i].getLastname() << "|";
		if (_contacts[i].getNickname().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getNickname().substr(0,9) + "." << std::endl;
		else
			std::cout << std::setw(10) << _contacts[i].getNickname() << std::endl;
		i++;
	}
	std::cout << "Index: ";
	std::getline(std::cin, command);
	if (command.length() == 1)
	{	
		if (std::isdigit(command[0]))
		{
			command[0] -= 48;
			if (command[0] < _count)
				search_input(command[0]);
			else
				std::cout << "Contact number is not found" << std::endl;
		}
		else
			std::cout << "Contact number must be digit" << std::endl;
	}
	else
		std::cout << "Contact number must be between 1-8" << std::endl;
}

int	PhoneBook::sytax_check(std::string name)
{
	if(name.empty())
	{
		std::cout << "Field cannot be empty. " << std::endl;
		return (0);
	}
	if (name == " ")
	{
		std::cout << "Field cannot be empty. " << std::endl;
		return (0);
	}
	return (1);
}

void	PhoneBook::search_input(int command)
{
	std::cout << "First Name: " << _contacts[command].getFirstname() << std::endl;
	std::cout << "Last Name: " << _contacts[command].getLastname() << std::endl;
	std::cout << "Nick Name: " << _contacts[command].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[command].getPhonenumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[command].getDarkestsecret() << std::endl;
}