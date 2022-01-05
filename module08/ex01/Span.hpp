#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class Span
{
	private :
		std::vector<int> tab;
		unsigned int _n;
	public:
		Span(unsigned int n);
		~Span(void);
		Span(const Span &src);
		Span &operator=(const Span &rhs);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		class ErrorContainer : public std::exception
		{
			const char* what() const throw()
			{
				return "Container full, empty or only one number stored !";
			}
		};
};


#endif