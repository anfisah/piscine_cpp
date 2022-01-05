#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator it;
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(const MutantStack &src) : std::stack<T>(src) {};
		MutantStack &operator=(const MutantStack &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}
		it begin() { return this->c.begin(); }
    	it end() { return this->c.end(); }
};

#endif