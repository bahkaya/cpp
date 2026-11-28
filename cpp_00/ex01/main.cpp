/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 15:01:01 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 15:01:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook MyPhoneBook;
	std::string Command;
	while(1)
	{
		std::cout << "Enter Command (ADD / SEARCH / EXIT) :";
		std::getline(std::cin, Command);
		if (std::cin.eof())
			return (0);
		if (Command == "ADD")
			MyPhoneBook.AddContact();
		else if (Command == "SEARCH")
			MyPhoneBook.SearchContact();
		else if (Command == "EXIT")
			return(0);
	}
	return (0);
}