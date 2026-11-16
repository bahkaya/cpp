/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:43:18 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 14:57:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact()
{
    std::string name;
    
    std::cout << "First Name ";
    std::getline(std::cin, name);
    _contacts[0].setFirstname(name);
}

void	PhoneBook::searchContact();
{
}