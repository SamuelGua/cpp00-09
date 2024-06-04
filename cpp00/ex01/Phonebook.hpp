/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 09:19:41 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 09:09:57 by scely            ###   ########.fr       */
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
