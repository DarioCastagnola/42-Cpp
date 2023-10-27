/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:20:42 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/27 12:04:23 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <string>
# include <iostream>
# include <iomanip>
# include <fstream>
# include <exception>
# include <cstdlib>
# include <cfloat>
# include <limits>
# include <sstream>
# include <cmath>
# ifndef COLORS
#  define GREEN "\033[1;32m"
#  define RED "\033[1;31m"
#  define CYAN "\033[1;36m"
#  define YELLOW "\033[1;33m"
#  define BLUE "\033[1;34m"
#  define PURPLE "\033[1;35m"
#  define RESET "\033[0m"
# endif

class ScalarConverter
{
    public:
        static void convert(std::string str);
        static bool check_input(std::string str);
        static double  stod(std::string str);

    private:    
        ScalarConverter();
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter();
        static int _type;
};  