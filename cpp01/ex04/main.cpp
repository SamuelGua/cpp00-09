/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 17:49:28 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 22:50:10 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int main(int ac, char *av[])
{
	size_t			s1;
	std::fstream	fs;
	std::string		buffer;
	int				pos;

	if (ac != 4)
	{
		std::cout << "Error: Wrongs numbers of arguments" << std::endl;
		std::cout << "	<  filename >" << std::endl;
		std::cout << "	<  string or char to change >" << std::endl;
		std::cout << "	<  new string or new char >" << std::endl;
		return (1);
	}
	s1 = std::strlen(av[2]);
	fs.open(av[1], std::fstream::in | std::fstream::out);
	if (fs.fail())
		return (std::cout << "Error: Wrong file" << std::endl, 1);
	std::ofstream outfile("newfile.txt");
	if (outfile.fail())
		return (std::cout << "Error: Fail to creat new file" << std::endl, 1);
	while (std::getline(fs, buffer))
	{
		pos = 0;
		while (pos != (int)std::string::npos)
		{
			pos = buffer.find(av[2]);
			if (pos >= 0)
			{
				buffer.erase(pos, s1);
				buffer.insert(pos, av[3]);
			}
			std::cout << pos << std::endl;
		}
		outfile << buffer << std::endl;
		buffer.clear();
	}
	outfile.close();
	fs.close();
	
}
