/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:16:00 by jarumuga          #+#    #+#             */
/*   Updated: 2024/12/05 16:23:05 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address of the string variable " << &str << std::endl;
	std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF " << &stringREF << std::endl;

	std::cout << "Value of the string variable " << str << std::endl;
	std::cout << "Value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF " << stringREF << std::endl;

	return (0);
}
