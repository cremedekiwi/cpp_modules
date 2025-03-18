/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:44:37 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/31 15:23:27 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int main(int ac, char **av)
{
	// need two arguments
	if (ac != 2)
	{
		std::cerr << "Error: Incorrect number of arguments" << std::endl;
		return (1);
	}

	// create an RPN object
	RPN rpn;
	// store the expression
	std::string expression = av[1];

	try
	{
		// calls evaluate which processes the expression and return the final result
		int result = rpn.evaluate(expression);
		std::cout << result << std::endl;
	}
	catch (...)
	{
		std::cerr << "Error: Unexpected error occurred" << std::endl;
		return (1);
	}
	return (0);
}
