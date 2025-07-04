/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/07/04 09:11:49 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{

	{
		// int a = 2;
		// int b = 3;
		// ::swap( a, b );

		const int a = 2;
		const int b = 3;


		std::cout << "a = " << a << ", b = " << b << std::endl;

		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}

	{
		// std::string c = "chaine1";
		// std::string d = "chaine2";
		// ::swap(c, d);

		const std::string c = "chaine1";
		const std::string d = "chaine2";

		std::cout << "c = " << c << ", d = " << d << std::endl;

		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		// long a = 2;
		// long b = 3;
		// ::swap( a, b );

		const long a = 2;
		const long b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;

		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}

	{
		size_t a = 2;
		size_t b = 3;

		::swap( a, b );

		std::cout << "a = " << a << ", b = " << b << std::endl;

		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}

	return 0;
}
