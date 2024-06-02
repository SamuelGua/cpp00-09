/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:21:38 by scely             #+#    #+#             */
/*   Updated: 2024/06/02 13:42:00 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		~Zombie(void);
		void set_name(std::string name);
		void announce( void );
};

#endif