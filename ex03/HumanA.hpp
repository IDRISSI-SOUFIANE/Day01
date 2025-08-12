/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:43:19 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/12 18:26:11 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon&		w;
	public:
		void		attack();
		void		setName(std::string n);
		std::string	getName();
	HumanA(std::string n, Weapon& cl);
	~HumanA();
};

# endif