#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat (WrongCat const & src);
		WrongCat &operator=(WrongCat const & rhs);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif