#include "easyfind.hpp"

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> temp(1, 12);

	temp.push_back(34);
	temp.push_back(56);
	temp.push_back(23);
	temp.push_back(12);
	temp.push_back(45);

	try {
		easyfind(temp, 12);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		easyfind(temp, 28);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		easyfind(temp, 23);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}