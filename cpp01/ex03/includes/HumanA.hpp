/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:39:05 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 08:17:21 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string name;
		// hold a reference to a Weapon object
		Weapon &weapon;

	public:
		// the constructor init a HumanA object
		HumanA(const std::string &name, Weapon &weapon);
		~HumanA();

		void attack() const;
};

#endif
