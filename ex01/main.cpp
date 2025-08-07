/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:37:23 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 14:39:24 by sidrissi         ###   ########.fr       */
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

	ptr = zombieHorde(5, "brahim");
	for (int i= 0; i < 5; i++)
		ptr[i].annonuce();
	delete[] ptr;
}
