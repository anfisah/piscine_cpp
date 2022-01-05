#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat (Cat const & src);
		Cat &operator=(Cat const & rhs);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		
};

#endif