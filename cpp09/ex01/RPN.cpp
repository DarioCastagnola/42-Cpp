/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:35:20 by dcastagn          #+#    #+#             */
/*   Updated: 2023/11/16 16:09:01 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

 
//<< std::fixed << std::setprecision(2)

RPN::RPN() {
	this->addend = 0;
	this->addend2 = 0;
}

RPN::RPN(const RPN &obj) {
    *this = obj;
}

RPN &RPN::operator=(const RPN &obj) {
    if (this == &obj)
        return *this;
    return *this;
}

RPN::~RPN() {
    ;
}

bool RPN::isValidOperation(std::string line)
{
	if (line.empty())
	{
		std::cerr << RED << "Error" << RESET << std::endl;
		return false;
	}
    for (size_t i = 0; i < line.size(); i++)
    {
        if ((line[i] < '0' || line[i] > '9') && (line[i] != '*' && line[i] != '/' && line[i] != '-' && line[i] != '+' && line[i] != ' '))
        {
            std::cerr << RED << "Error" << RESET << std::endl;
            return false;
        }
        if ((line[i] == ' ' && line [i + 1] == ' ') || line[line.size() - 1] == ' ')
        {
            std::cerr << RED << "Error" << RESET << std::endl;
            return false;
        }
        if ((i != (line.size() - 1)) && (line[i] != ' '))
            if (line[i + 1] != ' ')
            {
                std::cerr << RED << "Error" << RESET << std::endl;
                return false;
            }
    }
    return true;
}

void RPN::reversePolishNotation(char *operation) {
    std::string line = operation;
    if (!isValidOperation(line))
        return ;
    for (size_t i = 0; i < line.size(); i++)
    {
        if (isdigit(line[i]))
            this->_myStack.push(line[i] - 48);
		if ((line[i] == '-' || line[i] == '/' || line[i] == '*' || line[i] == '+') && this->_myStack.size() < 2)
		{
			std::cerr << RED << "Error" << RESET << std::endl;
			return ;
		}
        if (line[i] == '+')
        {
			this->addend = this->_myStack.top();
            this->_myStack.pop();
			this->addend2 = this->_myStack.top();
            this->_myStack.pop();
			this->_myStack.push(this->addend2 + this->addend);
        }
		if (line[i] == '*')
		{
			this->addend = this->_myStack.top();
            this->_myStack.pop();
			this->addend2 = this->_myStack.top();
            this->_myStack.pop();
			this->_myStack.push(this->addend2 * this->addend);
		}
		if (line[i] == '-')
		{
			this->addend = this->_myStack.top();
            this->_myStack.pop();
			this->addend2 = this->_myStack.top();
            this->_myStack.pop();
			this->_myStack.push(this->addend2 - this->addend);
		}
		if (line[i] == '/')
		{
			this->addend = this->_myStack.top();
            this->_myStack.pop();
			this->addend2 = this->_myStack.top();
            this->_myStack.pop();
			if (this->addend == 0)
			{
				std::cerr << RED << "Error" << RESET << std::endl;
				return ;
			}
			this->_myStack.push(this->addend2 / this->addend);
		}
    }
	if (this->_myStack.size() > 1)
		{
			std::cerr << RED << "Error" << RESET << std::endl;
			return ;
		}
	std::cout << this->_myStack.top() << std::endl;
}
