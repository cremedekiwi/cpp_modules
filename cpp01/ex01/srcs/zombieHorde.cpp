/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:02:18 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 18:41:48 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	// if N is negative, return NULL
	if (N <= 0)
		return (NULL);

	// create an array on the heap
	Zombie* horde = new Zombie[N];

	// set the name for each index
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}

