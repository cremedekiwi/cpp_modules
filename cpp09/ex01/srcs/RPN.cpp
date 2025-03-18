/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:33:00 by jarumuga          #+#    #+#             */
/*   Updated: 2025/01/31 14:57:57 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"
#include <cstdlib>

RPN::RPN() {}

RPN::RPN(const RPN &other)
{
	this->stack = other.stack;
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		this->stack = other.stack;
	return (*this);
}

RPN::~RPN() {}

// return true if it's matches one of the four operators
bool RPN::isOperator(const std::string &token)
{
	return (token == "+" || token == "-" || token == "*"  || token == "/");
}

// return the result of the arithmetic operation
int RPN::performOperation(int a, int b, char op)
{
	switch (op)
	{
		case '+': return (a + b);
		case '-': return (a - b);
		case '*': return (a * b);
		case '/':
			if (b == 0)
			{
				// if b is 0 throw an error
				std::cerr << "Error: Division by zero" << std::endl;
				exit(1);
			}
			return (a / b);
		default:
			std::cerr << "Error: Invalid operator" << std::endl;
			exit(1);
	}
}

// return the result of the expression
int RPN::evaluate(const std::string &expression)
{
	std::istringstream iss(expression);
	std::string token;

	// reads each token from the input string
	while (iss >> token)
	{
		// if the token is a single digit nbr ; push into the stack
		if (isdigit(token[0]) && token.length() == 1)
			stack.push(token[0] - '0');
		// if the token is an operator
		else if (isOperator(token))
		{
			// if fewer than 2 numbers print an error
			if (stack.size() < 2)
			{
				std::cerr << "Error: Not enough operands" << std::endl;
				exit(1);
			}
			// we pop two operands from the stack
			int b = stack.top();
			stack.pop();
			int a = stack.top();
			stack.pop();

			// calls the function to compute the result
			// pushes the result back into the stack
			int result = performOperation(a, b, token[0]);
			stack.push(result);
		}
		// if the token is neither a valid nbr nor a valid operator print an error
		else
		{
			std::cerr << "Error: Invalid token " << std::endl;
			exit(1);
		}
	}
	// if multiple value remain, the expression is invalid
	if (stack.size() != 1)
	{
		std::cerr << "Error: Invalid expression " << std::endl;
		exit(1);
	}
	// if there's exactly one value left in the stack, return it
	return stack.top();
}

