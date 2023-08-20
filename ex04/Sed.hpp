/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:36:12 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/20 10:54:26 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>
# define ERROR_MES "\033[31mInvalid input\033[0m"


class Sed
{
	private:
		std::string	_inFile;
		std::string	_outFile;
		int	replace_helper(std::string s1, std::string s2);

	public:
		Sed(std::string name);
		~Sed();
		void	replace(std::string s1, std::string s2);
};

#endif