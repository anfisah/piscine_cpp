#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		virtual ~Dog(void);
		Dog (Dog const & src);
		Dog &operator=(Dog const & rhs);
		virtual void makeSound(void) const;
		std::string getType(void) const;
	private:
		Brain* _brainDog;
};

#endif