/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:43:18 by codespace         #+#    #+#             */
/*   Updated: 2026/11/28 15:56:41 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	Index = 0;
	Count = 0;
}

void	PhoneBook::AddContact()
{
	std::string Name;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

	std::cout << "First Name: ";
	std::getline(std::cin, Name);
	if (!SyntaxCheck(Name))
		return;

	std::cout << "Last Name: ";
	std::getline(std::cin, LastName);
	if (!SyntaxCheck(LastName))
		return;

	std::cout << "Nick Name: ";
	std::getline(std::cin, Nickname);
	if (!SyntaxCheck(Nickname))
		return;

	std::cout << "Phone Number: ";
	std::getline(std::cin, PhoneNumber);
	if (!SyntaxCheck(PhoneNumber))
		return;
	if (!PhoneNumberCheck(PhoneNumber))
		return;

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, DarkestSecret);
	if (!SyntaxCheck(DarkestSecret))
		return;
	Contacts[Index].SetFirstName(Name);
	Contacts[Index].SetLastName(LastName);
	Contacts[Index].SetNickname(Nickname);
	Contacts[Index].SetPhoneNumber(PhoneNumber);
	Contacts[Index].SetDarkestSecret(DarkestSecret);

	Index++;
	if(Index % 8 == 0)
		Index = 0;
	if(Count < 8)
		Count++;
}

void	PhoneBook::SearchContact()
{
	int	i;
	std::string Command;

	i = 0;
	if (Count == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout	<< std::setw(10) << "Index" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nick Name" << std::endl;
	while(i != Count)
	{
		std::cout << std::setw(10) << i << "|";
		if (Contacts[i].GetFirstName().length() > 10)
			std::cout << std::setw(10) << Contacts[i].GetFirstName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << Contacts[i].GetFirstName()<< "|";
		if (Contacts[i].GetLastName().length() > 10)
			std::cout << std::setw(10) << Contacts[i].GetLastName().substr(0,9) + "." << "|";
		else
			std::cout << std::setw(10) << Contacts[i].GetLastName() << "|";
		if (Contacts[i].GetNickname().length() > 10)
			std::cout << std::setw(10) << Contacts[i].GetNickname().substr(0,9) + "." << std::endl;
		else
			std::cout << std::setw(10) << Contacts[i].GetNickname() << std::endl;
		i++;
	}
	std::cout << "Index: ";
	std::getline(std::cin, Command);
	if (Command.length() == 1)
	{	
		if (std::isdigit(Command[0]))
		{
			Command[0] -= 48;
			if (Command[0] < Count)
				SearchInput(Command[0]);
			else
				std::cout << "Contact number is not found" << std::endl;
		}
		else
			std::cout << "Contact number must be digit" << std::endl;
	}
	else
		std::cout << "Contact number must be between 0-7" << std::endl;
}

int	PhoneBook::SyntaxCheck(std::string Name)
{
	int	i;

	i = 0;
	if(Name.empty())
	{
		std::cout << "Field cannot be empty. " << std::endl;
		return (0);
	}
	while(Name[i] != '\0' && std::isspace(Name[i]))
		i++;
	if (Name[i] == '\0')
	{
		std::cout << "Field cannot be empty. " << std::endl;
		return (0);
	}
	return (1);
}

int	PhoneBook::PhoneNumberCheck(std::string PhoneNumber)
{
	int	i;

	i = 0;
	while (PhoneNumber[i] != '\0')
	{
		if (!std::isdigit(PhoneNumber[i]))
		{
			std::cout << "Phone number can only be digit" << std::endl;
			return (0);
		}
		i++;
	}
	return (1);
}

void	PhoneBook::SearchInput(int Command)
{
	std::cout << "First Name: " << Contacts[Command].GetFirstName() << std::endl;
	std::cout << "Last Name: " << Contacts[Command].GetLastName() << std::endl;
	std::cout << "Nick Name: " << Contacts[Command].GetNickname() << std::endl;
	std::cout << "Phone Number: " << Contacts[Command].GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << Contacts[Command].GetDarkestSecret() << std::endl;
}
