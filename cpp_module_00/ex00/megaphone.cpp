/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:04:36 by bahkaya           #+#    #+#             */
/*   Updated: 2026/11/15 22:59:19 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	std::string str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	if (ac == 1)
	{
		std::cout << str << std::endl;
		return (0);
	}
	int	i;
	int	k;
	int upper_case;

	i = 1;
	k = 0;

	while (av[i] != NULL)
	{
		k = 0;
		while(av[i][k] != '\0')
		{
			if(av[i][k] >= 97 && av[i][k] <= 122)
			{
				upper_case = av[i][k] - 32;
				write(1, &upper_case, 1);
			}
			else
			{
				write(1, &av[i][k], 1);
			}
			k++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
