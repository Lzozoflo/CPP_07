/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/16 15:29:47 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main( void )
{
	{
		std::string str = "chaine";
		const char *a = str.c_str();
		::iter(a, str.length(), &put);
	}
	std::cout << "\n---------------------------" << std::endl;
	{
		int a[3] = {1, 2 ,3};
		::iter(a, 3, &put);
	}

	return 0;
}
