/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:29:24 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 15:23:21 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	type;
	public:
		void	setType(std::string t);
		const std::string&	getType() const;
	Weapon();
	Weapon(std::string t);
	~Weapon();
};

# endif