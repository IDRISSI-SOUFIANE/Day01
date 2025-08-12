/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:52:40 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 18:10:52 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string n, Weapon& cl):name(n), w(cl){}

HumanA::~HumanA(){}

void	HumanA::setName(std::string n)
{
	name = n;
}

std::string	HumanA::getName()
{
	return (name);
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << w.getType() << "\n";
}
