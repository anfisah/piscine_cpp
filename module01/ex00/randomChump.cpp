#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *zom = newZombie(name);

	zom->annonce();

	delete zom;
}