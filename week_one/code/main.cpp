#include <iostream>
#include <cassert>
#include <cstddef>
#include "IntArray.h"

using namespace std;

int main()
{
	IntArray ar(10); // allocate 10 integers
	for (int count=0; count < ar.getLength(); ++count)
		ar.setValue(count, count+1);

	cout << "The value of element 5 is: " << ar.getValue(5) << '\n';

	return 0;
} // ar is destroyed here, so the ~IntArray() destructor function is called here
