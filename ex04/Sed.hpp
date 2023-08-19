/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:36:12 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/05 14:08:30 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>

class Sed
{
	private:
		std::string	_inFile;
		std::string	_outFile;

	public:
		Sed(std::string name);
		~Sed();
		int	replace(std::string s1, std::string s2);	
};

#endif