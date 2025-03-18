/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:40:41 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 08:17:36 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string name;
		// hold a pointer to a Weapon object
		Weapon *weapon;

	public:
		// init with just a name
		HumanB(const std::string &name);
		~HumanB();

		void setWeapon(Weapon &assignWeapon);
		void attack() const;
};

#endif
