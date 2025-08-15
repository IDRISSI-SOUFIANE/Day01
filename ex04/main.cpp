/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:24:59 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/15 17:36:39 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
		return ((std::cout << "need 4 arguments\n"), 1);

	std::string	ex_file;
	std::string	s1;
	std::string	s2;

	ex_file = std::string(av[1]);
	s1 = std::string(av[2]);
	s2 = std::string(av[3]);
	if ((s1.empty()) || (s2.empty()))
		return ((std::cout << "is empty\n"), 0);
	if (readWriteFile(ex_file, s1, s2))
		return (1);
	return (0);
}

