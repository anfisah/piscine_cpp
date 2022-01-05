#include "Iter.hpp"

int main(void)
{
	int length = 4;
	std::string array[] = {"camille", "Manon", "Louis", "Lea"};
	
	Iter(array, length, printElement);

	int array2[] = {7, 3, 6, 2};
	
	Iter(array2, length, printElement);

	return 0;
}