/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 21:37:32 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/06 21:06:12 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP

class	Zombie
{
	private:
		std::string	name;
	public:
		void	annonuce(void);
	Zombie(std::string name);
	~Zombie();
};

# endif