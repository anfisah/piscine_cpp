#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
		this->_n = rhs._n;
	return *this;
}

void Span::addNumber(int number)
{
	if (tab.size() >= _n)
		throw ErrorContainer();
	tab.push_back(number);
}

int Span::shortestSpan()
{
	if (tab.size() == 0 || tab.size() == 1)
		throw ErrorContainer();
	unsigned int min = UINT_MAX;
	std::sort(tab.begin(), tab.end());
	std::vector<int>::iterator rit;
	for (rit = tab.begin(); rit != tab.end() - 1; ++rit)
	{
		unsigned int temp = (*(rit + 1)) - (*rit);
		if ( temp < min )
			min = temp;
	}
	return min;
}

int Span::longestSpan()
{
	if (tab.size() == 0 || tab.size() == 1)
		throw ErrorContainer();
	return *std::max_element(tab.begin(), tab.end()) - *std::min_element(tab.begin(), tab.end());
}
