/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:02:14 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 18:11:59 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(){}

Weapon::Weapon(std::string t):type(t){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string t)
{
	type = t;
}

const std::string&	Weapon::getType() const
{
	return (type);
}