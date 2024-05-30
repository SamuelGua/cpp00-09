#include <iostream>



class PhoneBook
{
	private:

	public :
		PhoneBook(void);
		~PhoneBook(void);
		char contact[8];

};

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook (void)
{
	std::cout << "Destructor is called" << std::endl;
}

int main(int ac, char *av[])
{
	PhoneBook test;
	
	test.contact[0] = 'S';
	std::cout << test.contact[1] << std::endl;
	return (0);
}