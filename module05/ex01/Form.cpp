#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeSigned, int gradeExec) 
: _name(name), _signed(false), _gradeSigned(gradeSigned), _gradeExec(gradeExec)
{
	if (_gradeSigned > 150 || _gradeExec > 150)
		throw GradeTooLowException();
	if (_gradeSigned < 1 || _gradeExec < 1)
		throw GradeTooHighException();
}

Form::~Form(void)
{
	return ;
}

Form::Form(const Form &src) 
: _name(src.getName()), _gradeSigned(src.getGradeSigned()), _gradeExec(src.getGradeExec())
{
	*this = src;
}

Form &Form::operator=(const Form &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_signed = rhs._signed;
	return *this;
}

std::string Form::getName(void) const
{
	return this->_name;
}

bool Form::getSigned(void) const
{
	return this->_signed;
}

int Form::getGradeSigned(void) const
{
	return this->_gradeSigned;
}

int Form::getGradeExec(void) const
{
	return this->_gradeExec;
}

std::ostream &operator<<(std::ostream &flux, const Form &form)
{
	flux << form.getName() << " must be signed to the grade "
	<< form.getGradeSigned();
	if (form.getSigned() == true)
		flux << ". Form state : signed";
	else 
		flux << ". Form state : not signed";

	return flux;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSigned)
		throw GradeTooLowException();
	_signed = true;
}
