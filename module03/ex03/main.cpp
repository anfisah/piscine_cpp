#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap cam("Camille");
	ClapTrap louis("Louis");
	ScavTrap manon("Manon");
	FragTrap lea("lea");
	DiamondTrap max("Max");

	manon.guardGate();
	cam.attack("Louis");
	louis.takeDamage(3);
	louis.beRepaired(5);
	cam.takeDamage(14);
	manon.attack("cam");
	louis.takeDamage(4);
	lea.beRepaired(44);
	lea.takeDamage(38);
	lea.attack("manon");
	lea.highFivesGuys();
	max.whoAmI();
	max.attack("cam");
	max.beRepaired(5);
	
	return 0;
}