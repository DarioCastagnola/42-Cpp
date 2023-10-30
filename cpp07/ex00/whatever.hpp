/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:02:22 by dcastagn          #+#    #+#             */
/*   Updated: 2023/10/30 11:43:13 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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