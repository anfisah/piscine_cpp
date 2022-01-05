#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <climits>

class Convert
{
	private:
		std::string _value;
	public:
		Convert(std::string str);
		~Convert(void);
		Convert(const Convert &src);
		Convert &operator=(const Convert &rhs);
		std::string getValue(void) const;
		float toFloat();
		char toChar();
		int toInt();
		double toDouble();
		void convert(void);
		class Impossible : public std::exception
		{
			const char* what() const throw()
			{
				return "Impossible";
			}
		};
		class NonDisplayable : public std::exception
		{
			const char* what() const throw()
			{
				return "Non displayable";
			}
		};
		class PlusInfini : public std::exception
		{
			const char* what() const throw()
			{
				return "+ inf";
			}
		};
		class MoinsInfini : public std::exception
		{
			const char* what() const throw()
			{
				return "- inf";
			}
		};
};

#endif