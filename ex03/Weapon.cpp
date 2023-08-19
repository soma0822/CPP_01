/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:06:56 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/04 16:06:55 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(const std::string newType)
{
	this->type = newType;
}