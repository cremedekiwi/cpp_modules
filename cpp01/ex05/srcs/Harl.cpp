/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:13:26 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 13:03:26 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl()
{
	std::cout << "Harl destroyed!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You\
 didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for\
 more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve\
 been coming for years whereas you started working here since last\
 month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager\
 now." << std::endl;
}


void Harl::complain(std::string level)
{
	// array of levels command
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// array of levels functions
	HarlLevelsFunction functions[] = {&Harl::debug, &Harl::info, \
	&Harl::warning, &Harl::error};

	// for each command, you assign the associate function
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			// this : refers to the current object instance of the class
			// functions[i] : accesses the i element in the functions array
			// *functions[i] : dereferences the ptr to get the actual funct
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Invalid level: " << level << std::endl;
}

