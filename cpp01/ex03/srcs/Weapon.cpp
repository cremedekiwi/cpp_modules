/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:32:04 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 08:24:36 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type) {}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed!" << std::endl;
};

// retrieve the current type of the weapon
const std::string &Weapon::getType() const
{
	return (type);
}

// update the type of the weapon
void Weapon::setType(const std::string &newType)
{
	type = newType;
}
