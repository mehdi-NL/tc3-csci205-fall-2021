#include <iostream>

using namespace std;

int main(){
	/*
	`	Static Memory Allocation:
			happens for static and global variables. Memory for these types of variables is allocated once when your program is run and persists throughout the life of your program.
		Automatic Memory Allocation:
			happens for function parameters and local variables. Memory for these types of variables is allocated when the relevant block is entered, and freed when the block is exited, as many times as necessary.
		Both static and automatic allocation have two things in common:
			1) The size of the variable / array must be known at compile time.
    		2) Memory allocation and deallocation happens automatically (when the variable is instantiated / destroyed).

		Dynamic Memory Allocation:
			is a way for running programs to request memory from the operating system when needed. This memory does not come from the program’s limited stack memory -- instead, it is allocated from a much larger pool of memory managed by the operating system called the heap. On modern machines, the heap can be gigabytes in size.
	*/

	int x = 2; 			// automatic memory allocation 	-> allocated on the stack
	static int y = 4; 	// static memory allocation		-> written into executable
	int *z = new int;	// dynamic memory allocation 	-> allocated on the heap
	*z = 6;
	int *a = new int(8); // direct initialization		-> allocated on the heap

	cout << "x is: " << x << endl;
	cout << "y is: " << y << endl;
	cout << "z is: " << *z << endl;
	cout << "a is: " << *a << endl;

	/*
		Dynamically allocated variables must be deleted explicitly. This causes the
		memory to handed bak to the OS. The variable IS NOT being actually deleted
	*/
	delete z; 	// variable z is now a "dangling pointer". DO not dereference after this point
				// without reallocating. There is NO GUARANTEE that the value will still be
				// available. Expect undefined behavior

	/*
		Dynamically allocated memory stays allocated until it is explicitly deallocated or until the program ends (and the operating system cleans it up, assuming your operating system does that). However, the pointers used to hold dynamically allocated memory addresses follow the normal scoping rules for local variables.

		This is called a memory leak. Memory leaks happen when your program loses the address of some bit of dynamically allocated memory before giving it back to the operating system. When this happens, your program can’t delete the dynamically allocated memory, because it no longer knows where it is. The operating system also can’t use this memory, because that memory is considered to be still in use by your program.
	*/

	int *b = new int(10); 	// because this variable was not deallocated, when variable b
							// goes out of scope the memory will still be considered
							// allocated by the OS and will not be avaiable for reallocation
							// delete b;

	int c = 15;
	int *d = new int; 	// allocate memory
	// deallocate d before reassignment
	d = &c;		 		// old address lost, memory leak results

	return 0;
}
