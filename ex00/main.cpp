/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 21:57:33 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/04 14:28:57 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	std::string	name = "Stack";
	Zombie	zombie1(name);
	
	name = "Heap";
	Zombie	*zombie2 = newZombie(name);
	zombie2->announce();
	
	name = "Chump";
	randomChump(name);
	
	delete(zombie2);
}

/*int	main( void )
{
	std::string	name = "";
	std::cout << "\033[33mPlease input Zombie name : \033[0m" << std::flush;
	std::getline(std::cin, name);
	std::cout << "\033[33mCreating Zombie on the stack.\033[0m" << std::endl;

	Zombie	zombie1(name);
	
	std::cout << "\033[34mPlease input Zombie name : \033[0m" << std::flush;
	std::getline(std::cin, name);
	std::cout << "\033[34mCreating Zombie on the heap.\033[0m" << std::endl;
	
	Zombie	*zombie2 = newZombie(name);
	zombie2->announce();
	
	std::cout << "\033[35mPlease input Zombie name : \033[0m" << std::flush;
	std::getline(std::cin, name);
	std::cout << "\033[35mCalling randomChump().\033[0m" << std::endl;
	
	randomChump(name);
	
	delete(zombie2);
}
 */