/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:08:43 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 18:42:11 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// stack (auto memory management)
// limited to function scope
// no cleanup needed
void randomChump(std::string name)
{
	// create a Zombie on the stack
	Zombie zombie(name);
	// call the announce method
	zombie.announce();
}
