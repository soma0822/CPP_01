/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:36:06 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/20 10:57:04 by sinagaki         ###   ########.fr       */
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



int	Sed::replace_helper(std::string s1, std::string s2)
{
	std::string	str;
	if (s1.empty())
		return(1);
	std::ifstream ifs(this->_inFile);
	if (!ifs)
		return (2);
	if (std::getline(ifs, str, '\0'))
	{
		std::ofstream ios(this->_outFile);
		if (!ios)
		{
			ifs.close();
			return (3);
		}
		std::string::size_type pos = 0;
		while ((pos = str.find(s1, pos)) != std::string::npos)
		{
		    str.replace(pos, s1.length(), s2);
    		pos += s2.length();
		}
		ios << str << std::endl;
		ios.close();
	}
	ifs.close();
	return (0);
}

void	Sed::replace(std::string s1, std::string s2)
{
	int	value;
	
	value = this->replace_helper(s1, s2);
	if (value == 1)
		std::cout << ERROR_MES << std::endl;
	else if (value == 2)
		std::cout << "\033[31mInfile Error.\033[0m" << std::endl;
	else if (value == 3)
		std::cout << "\033[31mOutfile Error.\033[0m" << std::endl;
}

