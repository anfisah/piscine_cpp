#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern &src);
		Intern &operator=(const Intern &rhs);
		Form *makeForm(std::string nameForm, std::string targetForm);
	class formUnknow : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return "Form unknow";
			}
	};
};

#endif