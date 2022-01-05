#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Must have 2 arguments" << std::endl;
		return 1;
	}
	Convert value = Convert(av[1]);
	value.convert();

	return 0;
}