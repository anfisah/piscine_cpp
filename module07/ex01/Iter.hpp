#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void Iter(T* addressArray, int lengthArray, void(*f)(T const &))
{
	for(int i = 0; i < lengthArray; i++)
		f(addressArray[i]);
}

template<typename T>
void printElement(T const &element)
{
	std::cout << element << std::endl;
}

#endif