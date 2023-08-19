/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:36:06 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/05 14:12:24 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string name) : _inFile(name)
{
	this->_outFile = name + ".replace";
}

Sed::~Sed(void)
{
}

int	Sed::replace(std::string s1, std::string s2)
{
	std::string	str;
	std::ifstream ifs(this->_inFile);
	if (!ifs)
	{
		std::cout << "\033Infile Error.\033[0m" << std::endl;
		return (1);
	}
	if (std::getline(ifs, str, '\0'))
	{
		std::ofstream ios(this->_outFile);
		if (!ios)
		{
			std::cout << "\033Outfile Error.\033[0m" << std::endl;
			return (1);
		}
		
	}
}