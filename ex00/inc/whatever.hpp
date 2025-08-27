/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/08/27 10:24:27 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T &min(const T &a, const T &b)
{
	return (a < b) ? a : b;
}

template <typename T>
const T &max(const T &a, const T &b)
{
	return (a > b) ? a : b;
}

template <typename T>
T &min( T &a,  T &b)
{
	return (a < b) ? a : b;
}

template <typename T>
T &max( T &a,  T &b)
{
	return (a > b) ? a : b;
}

#endif
