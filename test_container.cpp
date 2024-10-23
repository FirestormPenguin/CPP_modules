#include <iostream>
#include <vector>
#include <list>
#include <map>

int main()
{
	// Vector container
	std::vector<int> numbers;
	std::cout << "Vector container: ";
	std::vector<int>::iterator it;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	for (it = numbers.begin(); it != numbers.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// List container
	std::list<std::string> names;
	names.push_back("Alice");
	names.push_back("Bob");
	names.push_back("Charlie");
	std::cout << "List container: ";
	std::list<std::string>::iterator it;
	for (it = names.begin(); it != names.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}
