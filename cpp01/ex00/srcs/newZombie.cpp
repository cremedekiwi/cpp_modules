/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:02:18 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 18:42:08 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// heap (manual memory management)
// persistent
// require delete to avoid memory leak
Zombie* newZombie(std::string name)
{
	// new keyword allocates memory for a new Zombie on the heap
	return new Zombie(name);
}
