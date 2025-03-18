/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:34:31 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/12 18:08:27 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		// constructors and destrutor
		ScavTrap(); // default
		ScavTrap(const std::string& name); // parameter
		ScavTrap(const ScavTrap& other); // copy
		ScavTrap& operator=(const ScavTrap& other); // assignment
		~ScavTrap(); // destructor

		void attack(const std::string& target);
		void guardGate();
};

#endif
