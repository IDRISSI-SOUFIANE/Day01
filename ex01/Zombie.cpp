/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:02:54 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 14:42:11 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

void	Zombie::set_name(std::string n)
{
	name = n;
}

void	Zombie::annonuce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

