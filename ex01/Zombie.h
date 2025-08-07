/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:07:55 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/07 10:48:29 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef	ZOMBIE_H
# define	ZOMBIE_H

# include "Zombie.hpp"

void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

# endif