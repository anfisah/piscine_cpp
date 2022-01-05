#include "Zombie.hpp"

int main(void)
{
	std::srand(std::time(NULL)); 
	const std::string names[6] = {"Louis", "Manon", "Marie", "Max", "Martial", "Pauline"};
	const int names_size = (sizeof(names) / sizeof(std::string));
	randomChump(names[rand() % names_size]);

	return (0);
}
