/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:31:13 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 14:42:25 by sidrissi         ###   ########.fr       */
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
		void	set_name(std::string  name);
	Zombie();
};

# endif