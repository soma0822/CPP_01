/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:57:33 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/04 14:52:44 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << std::endl;
	std::cout <<  stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;

}

/* int	main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string stringREF = *stringPTR;

	std::cout << &str << std::endl;
	std::cout << str << std::endl;
	
	std::cout <<  stringPTR << std::endl;
	std::cout << stringPTR << std::endl;

	std::cout << &stringREF << std::endl;
	std::cout << stringREF << std::endl;
} */
