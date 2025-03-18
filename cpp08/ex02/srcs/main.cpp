/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:15:57 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/29 14:53:57 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element: " << mstack.top() << std::endl;
	std::cout << "----------" << std::endl;

	std::cout << "Stack size: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Stack size after pop: " << mstack.size() << std::endl;
	std::cout << "----------" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Stack elements (bottom to top):" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << "----------" << std::endl;

	std::cout << "Reverse iteration (top to bottom):" << std::endl;
	for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
		std::cout << *rit << std::endl;
}
