/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:57:10 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/31 14:39:55 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <string>

// reverse polish notation
class RPN
{
	private:
		// hold operands and intermediate results
		std::stack<int> stack;
		// checks if a given token is an operator
		bool isOperator(const std::string &token);
		// performs the math
		int performOperation(int a, int b, char op);

	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		// processes an RPN expression and returns the result
		int evaluate(const std::string &expression);
};

#endif
