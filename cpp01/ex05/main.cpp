/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:23:18 by scely             #+#    #+#             */
/*   Updated: 2024/06/04 18:46:38 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main()
{
	Harl TEST;

	TEST.complain("DEBUG");
	std::cout << "================================" << std::endl;
	TEST.complain("INFO");
	std::cout << "================================" << std::endl;
	TEST.complain("WARNING");
	std::cout << "================================" << std::endl;
	TEST.complain("ERROR");
	std::cout << "================================" << std::endl;
	TEST.complain("fqwqfqwffqwfqwfq");

}