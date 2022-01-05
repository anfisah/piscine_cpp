#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		T* array;
		unsigned int _n;
	public:
		Array(void) : array(NULL), _n(0) {};
		~Array() { delete [] array; }
 		Array(unsigned int n) : _n(n)
		{
			array = new T[_n];
			for(unsigned int i = 0; i < _n; i++)
				array[i] = 0;
		}
		Array(const Array &src)
		{
			if (this != &src)
			{
				_n = src._n;
				array = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					array[i] = src.array[i];
			}
		}
		Array &operator=(const Array &rhs)
		{
			if (this != &rhs)
			{
				if (array)
					delete [] array;
					array = NULL;
				_n = rhs._n;
				array = new T[_n];
				for (unsigned int i = 0; i < _n; i++)
					array[i] = rhs.array[i];
			}
			return (*this);
		}
		unsigned int size(void)
		{
			return _n;
		}
		T &operator[](unsigned int index)
		{
			if (index >= _n)
				throw Exception();
			return array[index];
		}
		class Exception: public std::exception
		{	
			virtual const char* what() const throw() { 
				return "Out of the limits !"; 
			} 
		}; 
};

#endif