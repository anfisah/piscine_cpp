#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		std::string getName(void) const;
		int getGrade(void) const;
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw()
			{
				return "Grade is too high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw()
			{
				return "Grade is too low";
			}
		};
		void IncrementGrade(void);
		void DecrementGrade(void);
		void signForm(Form &form);
		void executeForm(Form const &form);
};

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &bureaucrat);

#endif