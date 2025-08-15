/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:22:40 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/15 17:35:46 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	ft_replace(size_t pos, size_t len, std::string s, std::string n_s)
{
	if (pos >= s.length())
		return ((std::cout << "out of range\n"), "");
	s.erase(pos, len);
	s.insert(pos, n_s);
	return (s);
}

int	readWriteFile(std::string ex_file, std::string s1, std::string s2)
{
	std::ifstream	file( ex_file );
	std::string		newFile;
	std::string		strInput;
	std::string		newInput;
	size_t	pos;


	if (!file)
		return ((std::cerr << "Error Opening file\n"), 1);

	newFile = ex_file + ".replace";
	std::ofstream	new_file( newFile );
	if (!new_file)
		return ((std::cerr << "Error Opening file\n"), 1);

	while (std::getline(file, strInput))
	{
		pos = strInput.find(s1);
		if (pos != std::string::npos)
		{
			newInput = ft_replace(pos, (pos + s1.length()), strInput, s2);
			new_file << newInput << "\n";
		}
		else
			new_file << strInput << "\n";
	}
	return (0);
}
