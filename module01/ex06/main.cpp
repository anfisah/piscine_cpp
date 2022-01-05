#include "Karen.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Must have 1 argument" << std::endl;
		return (1);
	}
	Karen karen;
	karen.complain(av[1]);
	return 0;
}