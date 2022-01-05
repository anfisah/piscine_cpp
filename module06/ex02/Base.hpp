#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base(void) {std::cout << "Base destructor" << std::endl;};
};

class A : public Base
{
	public:
		virtual ~A(void) {std::cout << "Base destructor" << std::endl;};
};
class B : public Base 
{
	public:
		virtual ~B(void) {std::cout << "Base destructor" << std::endl;};
};
class C : public Base
{
	public:
		virtual ~C(void) {std::cout << "Base destructor" << std::endl;};
};

Base * generate(void);
void identify(Base *p);
void identify (Base & p);

#endif