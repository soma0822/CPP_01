/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarL.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinagaki <sinagaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:22:39 by sinagaki          #+#    #+#             */
/*   Updated: 2023/08/20 12:54:30 by sinagaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

# include <iostream>
# include <functional>

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
# define INFO "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR "This is unacceptable! I want to speak to the manager now."
# define INVALID_ERROR "\033[31mInvalid error\033[0m"


class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	invalidError( void );
	
	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

typedef void (Harl::*t_func) ( void );

#endif