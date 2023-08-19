/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:15:05 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/04 16:49:57 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << "has no weapon." << std::endl;
		return ;
	}
	std::string weapon = this->weapon->getType();
	std::cout << this->name << " attacks with their " << weapon << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}