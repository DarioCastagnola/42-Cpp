/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:02:22 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/27 16:30:03 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;
 
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T max(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

template <typename T> T min(T x, T y)
{
    if (x < y)
        return x;
    else
        return y;
}

template <typename T> void swap(T &x, T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
    return ;
}