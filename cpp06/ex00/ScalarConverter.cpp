/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:20:39 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/26 11:05:14 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::_type = -1;

ScalarConverter::ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	*this = obj;
	return ;
}

ScalarConverter::~ScalarConverter(void)
{
	return ;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &obj)
{
	if (this == &obj)
		return (*this);
	return (*this);
}

int ScalarConverter::stoi(std::string str) {
    std::stringstream ss;
    ss << str;
    int x = 0;
    ss >> x;
    return x;
}

bool ScalarConverter::check_input(std::string str) {
    int j = 0;
    int k = 0;
    if (!str[0])
        return false;
    if (str.size() == 1)
    {
        if (std::isdigit(str[0]))
            ScalarConverter::_type = 1;
        return (!std::isdigit(str[0]) || !std::isalpha(str[0]));
    }
    if (str == "nan" || str == "nanf" || str == "+inff" || str == "-inff" || str == "-inf" || str == "+inf")
    {
        ScalarConverter::_type = 0;
        return true;
    }
    for (int i = 0; i < (int)str.length(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'f' && str[i] != '-' && str[i] != '+')
            return (false);
    	j += (str[i] == 'f');
		k += (str[i] == '.');
	}
	if (j > 1 || k > 1 || (j && !k))
    {
		return (false);
    }
    ScalarConverter::_type = j + k + 1;
	return (true);
}

void ScalarConverter::convert(std::string str) {
	int		n;
	char	c;
	double	d;
	float	f;

	if (!ScalarConverter::check_input(str))
	{
		std::cerr << RED << "Error\nThe input is not a valid char, int, float or double" << RESET << std::endl;
		return ;
	}
    switch (ScalarConverter::_type)
    {
    case -1:
        c = str[0];
        n = static_cast<int>(c);
        f = static_cast<float>(n);
        d = static_cast<double>(n);
        break;
    case 0:
        d = atof(str.c_str());
        n = static_cast<int>(d);
        c = static_cast<char>(n);
        f = d;
        break;
    case 1:
        n = stoi(str);
        c = static_cast<char>(n);
        f = static_cast<float>(n);
        d = static_cast<double>(n);
        break;
    default:
        d = atof(str.c_str());
        f = d;
        n = static_cast<int>(d);
        c = static_cast<char>(n);
        break;
    }
    if (ScalarConverter::_type == 0)
        std::cout << "char: impossible\nint: impossible" << std::endl;
    else
    {
        if (n < 0)
            std::cout << "char: impossible" << std::endl;
        else if (n < 32 || n > 128)
            std::cout << "char: not displayable" << std::endl;
        else
            std::cout << "char: " << c << std::endl;
        std::cout << "int: " << n << std::endl;
    }
    std::cout << "float: " << f;
    if (f - (int)f == 0)
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: " << d;
    if (f - (int)f == 0)
        std::cout << ".0";
    std::cout << std::endl;
    return;
}