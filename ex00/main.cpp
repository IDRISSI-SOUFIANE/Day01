/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:37:23 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 10:50:20 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void f() {
	system("leaks Zombie");
}

int	main()
{
	// atexit(f);
	Zombie	*ptr;

	randomChump("soufiane");
	randomChump("u");

	ptr = newZombie("brahim");

	ptr->annonuce();

	delete ptr;
}
