#include <iostream>
#include "IntArray.h"

IntArray :: IntArray(int length) {
	std::cout << "Constructor called" << std::endl;
	assert(length > 0);

	m_array = new int[static_cast<std::size_t>(length)];
	m_length = length;
}

IntArray :: ~IntArray(){
	std::cout << "Destructor automatically called" << std::endl;
	// Dynamically delete the array we allocated earlier
	delete[] m_array;
}

void IntArray :: setValue(int index, int value) { m_array[index] = value; }
int IntArray :: getValue(int index) { return m_array[index]; }
int IntArray :: getLength() { return m_length; }
