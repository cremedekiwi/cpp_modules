/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:58:43 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/13 17:03:50 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(); // default
		FragTrap(const std::string& name); // parameter
		FragTrap(const FragTrap& other); // copy
		FragTrap& operator=(const FragTrap& other); // assignment
		~FragTrap(); // destructor

		void highFivesGuys(void);
};

#endif
