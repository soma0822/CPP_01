/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:22:42 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/20 13:21:06 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INVALID");
}

/* int	main(void)
{
	Harl	harl;
	std::string input = "";
	
	std::cout << INPUT_MES << std::flush;
	std::cin >> input;
	while (input.compare("EXIT"))
	{
		harl.complain(input);
		std::cout << INPUT_MES << std::flush;
		std::cin >> input;
	}
} */