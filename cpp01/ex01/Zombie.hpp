/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:57:23 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 10:04:53 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP 
# define ZOMBIEHORDE_HPP 

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		~Zombie();
		void setname(std::string name);
		void announce(void);
};

#endif