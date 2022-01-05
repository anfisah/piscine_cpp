#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form("ShrubberyCreationForm", 25, 5)
{
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::string file_name = _target;
	std::ofstream file(file_name) ;
	file << "          .     .  .      +     .      .          .       " << std::endl
	     <<	"	.       .      .       #       .           .           " << std::endl
		 << "        .      .         ###            .      .      .   " << std::endl
 		 <<	"     .        .   #:. .:##'##:. .:#  .      .             " << std::endl
		 <<	"           .      .  ####'###'####  .                     " << std::endl
 		 <<	"      .        #:.    .:#'###'#:.   .:#  .        .      ." << std::endl
 		 <<	" .               '#########'#########'        .        .  " << std::endl
 		 << "       .     #:.  '####' ###' ####'  .:#   .       .      " << std::endl
		 <<	"    .     .  ''#######''##'##''#######''                . " << std::endl
		 <<	"                .'##'#####'#####'##''           .     .   " << std::endl
 		 <<	"   .    #:. ...  .:##'###'###'##:.  ... .:#'     .        " << std::endl
		 <<	"      .     '#######'##'#####'##'#######'      .     .    " << std::endl
		 <<	"    .    .     '#####''#######''#####'    .      .        " << std::endl
		 <<	"            .     ''     000      ''    .     .           " << std::endl
		 <<	"       .         .   .   000     .        .       .       " << std::endl
		 <<	".. .. ..................O000O........................ ....";
}
