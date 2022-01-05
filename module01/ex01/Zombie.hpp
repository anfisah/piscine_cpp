#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void annonce(void);
		void getName(std::string name);

	private:
		std::string _name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif