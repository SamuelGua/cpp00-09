/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scely <scely@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:01:08 by scely             #+#    #+#             */
/*   Updated: 2024/07/23 12:59:20 by scely            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <algorithm>


class Split
{
private:
    Split();
    void the_split(std::string str, char del);
public:
    std::string *splited;
    Split(std::string str, char del);
    void new_data(std::string str, char del);
    // Split(Split const &copy);
    // Split&  operator=(Split const &str);
    ~Split();
};

Split::Split(std::string str, char del)
{
    Split::the_split(str, del);
}

void Split::the_split(std::string str, char del)
{
    if (str.empty() || !del)
        throw std::logic_error("Exception: fail to split. Argument is incorrect");

    /*===========clean area =================*/
    if (str[0] == del)
        str.erase(0, 1);
    if (*(str.end() - 1) == del)
        str.erase(str.length() - 1, 1);
    size_t pos = 0;
    size_t occur = 0;

    while ((pos = str.find(del, pos)) != std::string::npos)
    {
        pos = str.find(del, pos);
        occur = 1;
        while (pos + occur < str.size() && str[pos + occur] == del)
            occur++;
        if (occur > 1)
            str.erase(pos + 1, occur -1);
        pos++;
    }
    if (str.empty())
        throw std::logic_error("Exception: Only delimiter in the string");
    /*=========== clean area =================*/

    /*=========== count word ================*/
    size_t nbWords = std::count(str.begin(), str.end(), del) + 1;
    /*=========== count word ================*/

    /*===========  split a put int the strings================*/

    this->splited = new std::string[nbWords];
    pos = 0;
    for (size_t i = 0; i < nbWords; i++)
    {
        int c = 0;
        while (str[c + pos] != del && str[c + pos])
            c++;
        splited[i].append(str, pos, c);
        pos = str.find(del, pos);            
        pos++;
    }
    /*===========  split a put int the strings================*/
}

Split::~Split()
{
    delete [] splited;
}

int main()
{
    Split gvaleur("maman est la mon petit enfant mais dit moi comment tu t'appekrs sfegwege ", 32);
    
    int i = 0;
    while (!gvaleur.splited[i].empty())
    {
        std::cout << gvaleur.splited[i] << std::endl;
        i++;
    }
    
}
