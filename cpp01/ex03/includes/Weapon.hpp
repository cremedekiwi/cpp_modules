/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:28:47 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 08:20:57 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		// init a Weapon object with a given type
		Weapon(const std::string &type);
		~Weapon();

		// retrieve the current type of the weapon
		const std::string &getType() const;
		// update the type of the weapon
		void setType(const std::string &newType);
};

#endif
