/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:57:11 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 08:22:35 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// the constructor init a Zombie object with a given name
// & take the Zombie's name as a const reference to avoid copy
Zombie::Zombie(const std::string& zombieName) : name(zombieName) {}

// the destructor print a message indicating the destruction of the Zombie object
// stack : automatically called
// heap : is called when delete is used
Zombie::~Zombie()
{
	std::cout << name << " is destroyed." << std::endl;
}

// print a message
void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
