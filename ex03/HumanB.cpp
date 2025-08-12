/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:15:01 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 18:07:59 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string n):weapon(nullptr), name(n){}

HumanB::~HumanB(){}


void		HumanB::setName(std::string n)
{
	name = n;
}

void	HumanB::setWeapon(Weapon& w)
{
	weapon = &w;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << "has no Weapon\n";
}

