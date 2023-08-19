/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:57:33 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/04 14:27:41 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::string	name = "Inagaki";
	
	Zombie	*zombies = zombieHorde(5, name);
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
}

/* int	main( void )
{
	std::string	name = "";
	int			num = 0;
	std::cout << "\033[33mPlease input Zombie name : \033[0m" << std::flush;
	std::getline(std::cin, name);
	std::cout << "\033[33mPlease input number of Zombies : \033[0m" << std::flush;
	std::cin >> num;
	std::cout << "\033[33mCreating Zombies.\033[0m" << std::endl;

	Zombie	*zombies = zombieHorde(num, name);
	for (int i = 0; i < num; i++)
	{
		std::cout << i << " will announce." << std::endl;
		zombies[i].announce();
	}
	delete[] zombies;
}
 */