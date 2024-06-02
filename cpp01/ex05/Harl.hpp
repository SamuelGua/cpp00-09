/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:20:42 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 19:39:58 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
	private:
		void debug(void)
		{
			std::cout << "\033[3m";
			std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
			std::cout << "\033[0m";
			return ;
		}
		void info(void)
		{
			std::cout << "\033[3m";	
			std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
			std::cout << "\033[0m";
			return ;
		}
		void warning(void)
		{
			std::cout << "\033[3m";
			std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
			std::cout << "\033[0m";
			return ;
		}
		void error(void)
		{
			std::cout << "\033[3m";
			std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
			std::cout << "\033[0m";
			return ;
		}
	
	public:
		Harl(/* args */);
		~Harl();
		void complain(std::string level);
};

#endif