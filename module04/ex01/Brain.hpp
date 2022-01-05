#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain(const Brain &src);
		Brain& operator=(const Brain & op);
	private:
		std::string ideas[100];
};

#endif