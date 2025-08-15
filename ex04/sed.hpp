/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidrissi <sidrissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 11:23:13 by sidrissi          #+#    #+#             */
/*   Updated: 2025/08/15 17:35:09 by sidrissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

# include <iostream>
# include <string>
#include <fstream>

std::string	ft_replace(size_t pos, size_t len, std::string s, std::string n_s);
int	readWriteFile(std::string ex_file, std::string s1, std::string s2);
#endif