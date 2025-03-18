/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:59:12 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 15:13:00 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		unsigned int hitPoints; // health
		unsigned int energyPoints; // energy
		unsigned int attackDamage; // attack

	public:
		ClapTrap(); // default
		ClapTrap(const std::string& name); // parameterized
		ClapTrap(const ClapTrap& other); // copy
		ClapTrap& operator=(const ClapTrap& other); // copy assignment operator
		~ClapTrap(); // destructor

		// member functions
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
