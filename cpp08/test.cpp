#include <vector>
#include <iostream>

int main()
{
	std::vector<int> tab;

	tab.push_back(15);
	tab.push_back(14);
	tab.push_back(132);
	tab.push_back(152);

	std::cout << tab.data(2) << std::endl;
}