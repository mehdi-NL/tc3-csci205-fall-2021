#include <iostream>
#include <cassert> // for assert
#include <cstddef> // for size_t

using namespace std;

class IntArray{
private:
	int *m_array;
	int m_length;

public:
	IntArray(int length){ // constructor
		cout << "Constructor called" << endl;
		assert(length > 0);
		// dynamically allocate array using new
		m_array = new int[static_cast<std::size_t>(length)];
		m_length = length;
	}

	~IntArray(){// destructor
		// print statement just to "see" automatic invocation
		cout << "Destructor automatically called" << endl;
		// Dynamically delete the array we allocated earlier
		delete[] m_array;
	}

	void setValue(int index, int value) { m_array[index] = value; }
	int getValue(int index) 			{ return m_array[index]; }
	int getLength() 					{ return m_length; }
};

int main(){
	IntArray ar(10); // allocate 10 integers, call constructor
	for (int count=0; count < ar.getLength(); ++count)
		ar.setValue(count, count+1);

	cout << "The value of element 5 is: " << ar.getValue(5) << '\n';

	return 0;
} // ar is destroyed here, so the ~IntArray() destructor function is called
