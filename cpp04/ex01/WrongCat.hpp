/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat copy.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:31:16 by scely             #+#    #+#             */
/*   Updated: 2024/06/11 11:36:32 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "main.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
	public:
		WrongCat();
		WrongCat(std::string name);
		WrongCat(WrongCat &copy);
		WrongCat& operator=(const WrongCat& copy);
		~WrongCat();
		void makeSound() const;
};

#endif