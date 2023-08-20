/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:12:31 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/19 16:46:21 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << ERROR_MES << std::endl;
		return (1); 
	}
	Sed file(av[1]);
	file.replace(av[2], av[3]);
}