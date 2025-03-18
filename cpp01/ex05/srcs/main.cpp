/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:07:00 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/06 11:28:17 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// testing
int main()
{
	Harl harl;

	std::cout << "Testing DEBUG level:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Testing INFO level:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "Testing WARNING level:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Testing ERROR level:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "Testing KIWI level:" << std::endl;
	harl.complain("KIWI");
	std::cout << std::endl;

	return (0);
}

