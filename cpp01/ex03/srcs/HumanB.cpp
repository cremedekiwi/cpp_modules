/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:41:39 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 08:24:21 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) {}

HumanB::~HumanB()
{
	std::cout << "HumanB destroyed!" << std::endl;
};

// assign weapon
void HumanB::setWeapon(Weapon &assignWeapon)
{
	weapon = &assignWeapon;
}

// print name + weapon type
// or print has no weapon
void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with!" << std::endl;
}
