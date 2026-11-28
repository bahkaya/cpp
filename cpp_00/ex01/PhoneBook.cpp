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
	index = 0;
	count = 0;
}

void	PhoneBook::addContact()
{
	std::string name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "First Name: ";
	std::getline(std::cin, name);
	if (!sytax_check(name))
		return;

	std::cout << "Last Name: ";
	std::getline(std::cin, last_name);
	if (!sytax_check(last_name))
		return;

	std::cout << "Nick Name: ";
	std::getline(std::cin, nick_name);
	if (!sytax_check(nick_name))
		return;

	std::cout << "Phone Number: ";
	std::getline(std::cin, phone_number);
	if (!sytax_check(phone_number))
		return;

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_secret);
	if (!sytax_check(darkest_secret))
		return;
	contacts[index].setFirstname(name);
	contacts[index].setLastname(last_name);
	contacts[index].setNickname(nick_name);
	contacts[index].setPhonenumber(phone_number);
	contacts[index].setDarkestsecret(darkest_secret);

	index++;
	if(index % 8 == 0)
		index = 0;
	if(count < 8)
		count++;
}

void	PhoneBook::searchContact()
{
	int	i;
	std::string command;

	i = 0;
	if (count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nick Name" << std::endl;
	while(i != count)
	{
		std::cout << std::setw(10) << i << "|";
		if (contacts[i].getFirstname().length() > 10)
			std::cout << std::setw(10) << contacts[i].getFirstname().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << contacts[i].getFirstname()<< "|";
		if (contacts[i].getLastname().length() > 10)
			std::cout << std::setw(10) << _contacts[i].getLastname().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << contacts[i].getLastname() << "|";
		if (contacts[i].getNickname().length() > 10)
			std::cout << std::setw(10) << contacts[i].getNickname().substr(0,9) + "." << std::endl;
		else
			std::cout << std::setw(10) << contacts[i].getNickname() << std::endl;
		i++;
	}
	std::cout << "Index: ";
	std::getline(std::cin, command);
	if (command.length() == 1)
	{	
		if (std::isdigit(command[0]))
		{
			command[0] -= 48;
			if (command[0] < count)
				search_input(command[0]);
			else
				std::cout << "Contact number is not found" << std::endl;
		}
		else
			std::cout << "Contact number must be digit" << std::endl;
	}
	else
		std::cout << "Contact number must be between 0-7" << std::endl;
}

int	PhoneBook::sytax_check(std::string name)
{
	int	i;

	i = 0;
	if(name.empty())
	{
		std::cout << "Field cannot be empty. " << std::endl;
		return (0);
	}
	while(name[i] != '\0' && std::isspace(name[i]))
		i++;
	if (name[i] == '\0')
	{
		std::cout << "Field cannot be empty. " << std::endl;
		return (0);
	}
	return (1);
}

void	PhoneBook::search_input(int command)
{
	std::cout << "First Name: " << contacts[command].getFirstname() << std::endl;
	std::cout << "Last Name: " << contacts[command].getLastname() << std::endl;
	std::cout << "Nick Name: " << contacts[command].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[command].getPhonenumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[command].getDarkestsecret() << std::endl;
}
