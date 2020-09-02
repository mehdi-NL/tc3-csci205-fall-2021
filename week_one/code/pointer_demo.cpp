#include <iostream>
using namespace std;

int main()
{
    int x{5};
    cout << "x is: " << x << endl; 					// print the value of variable x
    cout << " address of x is: " << &x << endl;		// print the memory address of variable x
	cout << *(&x) << '\n'; 							// dereference the address

	int v{10};				// regular int variable
	int* p_to_v = &v;		// pointer to an int
	int array[10];
	cout << "v is: " << v << endl;
	cout << "p_to_v is: " << p_to_v << endl;
	cout << "p_to_v dereferenced is: " << *p_to_v << endl;

	// pointer size
	long *a = new long(123L);
	int  *b = new int(123);
	char *c = new char('A');

	cout << "Size of pointer to long: " << sizeof(a) << " bytes" << endl;
	cout << "\tSize of long: " << sizeof(long) << " bytes" << endl;
	cout << "Size of pointer to int: " << sizeof(b) << " bytes" << endl;
	cout << "\tSize of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of pointer to char: " << sizeof(c) << " bytes" << endl;
	cout << "\tSize of char: " << sizeof(char) << " bytes" << endl;
	cout << "Size of array: " << sizeof(array) << " bytes" << endl;
	cout << "\tSize of array element: " << sizeof(array[0]) << " bytes" << endl;
	cout << "\tLength of array: " << sizeof(array) / sizeof(array[0]) << " elements" << endl;

	return 0;
}
