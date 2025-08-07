/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:02:54 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 11:25:02 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string n):name(n)
{}

Zombie::~Zombie()
{
	std::cout << name << ": is destroyed\n";
}

void	Zombie::annonuce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
