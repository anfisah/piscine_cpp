#include "Karen.hpp"

int main(void)
{
	Karen msg;
	
	msg.complain("DEBUG");
	msg.complain("WARNING");
	msg.complain("ERROR");
	msg.complain("HELLO");
	msg.complain("INFO");
	msg.complain("DEBUG");

	return (0);
}