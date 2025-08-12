/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:07:18 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 09:11:20 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*pstr = &str;
	std::string	&rstr = str;

	std::cout << &str << "\n";
	std::cout << pstr << "\n";
	std::cout << &rstr << "\n";

	std::cout << str << "\n";
	std::cout << *pstr << "\n";
	std::cout << rstr << "\n";
	
}