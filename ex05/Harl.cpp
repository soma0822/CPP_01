/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:22:37 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/20 12:56:06 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
# include <functional>

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::debug( void )
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info( void )
{
	std::cout << INFO << std::endl;
}

void	Harl::warning( void )
{
	std::cout << WARNING << std::endl;
}

void	Harl::error( void )
{
	std::cout << ERROR << std::endl;
}

void	Harl::invalidError( void )
{
	std::cout << INVALID_ERROR << std::endl;
}

void	Harl::complain( std::string level )
{
	t_func	funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalidError};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	(this->*funcs[i])();
}