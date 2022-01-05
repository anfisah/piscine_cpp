#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(std::string const & type);
		~Cure(void);
		Cure(const Cure & src);
		Cure & operator=(Cure const & rhs);
		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
