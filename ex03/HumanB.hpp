/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:08:20 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 17:34:26 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon*		weapon;
		std::string	name;
	public:
		void		setName(std::string n);
		void		setWeapon(Weapon& w);
		void		attack();
	HumanB(std::string n);
	~HumanB();
};

#endif