/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:38:47 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 14:39:49 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"
#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zombie;
	int		i;

	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].set_name(name + "_" + std::to_string(i));
		i++;
	}
	return (zombie);
}