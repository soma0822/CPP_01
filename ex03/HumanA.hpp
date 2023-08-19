/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:12:05 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/04 15:58:54 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUAMANA_HPP
# define HUAMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon&	weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);
		
};

#endif