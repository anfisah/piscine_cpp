#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSigned;
		const int _gradeExec;
	public :
		Form(std::string name, int gradeSigned, int gradeExec);
		~Form(void);
		Form(const Form &rhs);
		Form &operator=(const Form &rhs);
		std::string getName(void) const;
		int getGradeSigned(void) const;
		int getGradeExec(void) const;
		bool getSigned(void) const;
		void beSigned(Bureaucrat &bureaucrat);
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
		class IsNotSignedException : public std::exception
		{
			const char* what() const throw()
			{
				return "Form is not signed";
			}
		};
		virtual void execute (Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &flux, const Form &form);


#endif