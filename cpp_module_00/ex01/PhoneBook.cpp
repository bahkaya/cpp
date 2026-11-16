/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 08:43:18 by codespace         #+#    #+#             */
/*   Updated: 2026/11/16 08:51:25 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	addContact()
{
    int i;

    i = 0;
    while (Contact[i] != NULL)
    {
        std::getline << Contact[i];
        i++;
    }
}

void	searchContact();