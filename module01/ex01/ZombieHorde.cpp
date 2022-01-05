#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *zombies;
	int i = 0;

	std::srand(std::time(NULL)); 
	const std::string names[6] = {"Louis", "Manon", "Marie", "Max", "Martial", "Pauline"};
	const int names_size = (sizeof(names) / sizeof(std::string));

	zombies = new Zombie[N];
	while(i < N)
	{
		name = names[rand() % names_size];
		zombies[i].getName(name);
		zombies[i].annonce();
		i++;
	}
	return (zombies);
}