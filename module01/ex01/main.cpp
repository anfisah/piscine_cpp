#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	
	zombies = zombieHorde(10, "random");

	delete [] zombies;
}
