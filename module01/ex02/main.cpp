#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Address in memory of the string with str: " << &str << std::endl;
	//std::cout << "addres pointer not address of the string: " << &stringPTR << std::endl;
	std::cout << "Address in memory of the string with stringPTR : " << stringPTR << std::endl;
	std::cout << "Address in memory of the string whith stringREF : " << &stringREF << std::endl;

	std::cout << "String stringPTR : " << *stringPTR << std::endl;
	std::cout << "String stringREF: " << stringREF << std::endl;


}