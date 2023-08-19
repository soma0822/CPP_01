/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:12:31 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/05 13:48:00 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "\033[31mInvalid input\033[0m" << std::endl;
		return (1); 
	}
	std::ofstream outfile(av[1]);
	if (!outfile)
	{
		std::cout << "\033[31mInvalid input\033[0m" << std::endl;
		return (1);
	}
	outfile << av[2] << av[3] << std::endl;
	outfile.close();
}