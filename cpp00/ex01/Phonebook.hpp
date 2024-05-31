/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:19:41 by scely             #+#    #+#             */
/*   Updated: 2024/05/31 21:01:17 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
	private:
		Contact contact[8];
		int _index;
		
	public:
		PhoneBook(void);
		~PhoneBook(void);
		bool add_new(void);
		void print_directory(void);
};

#endif