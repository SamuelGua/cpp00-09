/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:04:54 by scely             #+#    #+#             */
/*   Updated: 2024/07/04 09:40:02 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Le destructeur n'as pas besoin detre reecrit ?*/

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

int randomNumber(void)
{
    std::srand(std::time(0));
    return ((std::rand() % 3) + 1);
}

Base *generate(void)
{
    int random = randomNumber();
    if (random == 1)
        return ( new A);
    else if (random == 2)
        return (new B);
    else if (random == 3)
        return (new C);
    return(NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "The object p -> A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The object p -> B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The object p -> C" << std::endl;
    else
        std::cerr << "Error (identify*): casting object P is not a A B C object" << std::endl;    
}
void identify(Base &p)
{
    try {
        dynamic_cast<A&>(p);
        std::cout << "The object p -> A" << std::endl;
        return;
    } catch (const std::exception& error) {}
    
    try {
        dynamic_cast<B&>(p);
        std::cout << "The object p -> B" << std::endl;
        return;
    } catch (const std::exception& error) {}

    try {
        dynamic_cast<C&>(p);
        std::cout << "The object p -> C" << std::endl;
        return;
    } catch (const std::exception& error) {}
    std::cerr << "Error (identify&): casting object P is not a A B C object" << std::endl;
}

int main()
{   
    {
        Base *a = generate();
        identify(a);
        identify(*a);
        delete a;
    }
    {
        Base *a = NULL;
        identify(a);
        identify(*a);
    }
    
}