#include <string>
#include <iostream>



// pointuer peut etre NULL
// reference non et doit etre initialise a la creation
int main(void)
{
    std::string string;
    std::string *stringPTR = NULL;
    std::string &stringREF = string;
    
    string = "HI THIS IS BRAIN";
    stringPTR = &string;

    std::cout << "Adress of string    : " <<  &string << std::endl;
    std::cout << "Adress of stringPTR : " <<  &stringPTR << std::endl;
    std::cout << "Adress of stringREF : " <<  &stringREF << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "Value of string : " << string << std::endl;
    std::cout << "Value of stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value of stringREF : " << stringREF << std::endl;
    return (0);
}