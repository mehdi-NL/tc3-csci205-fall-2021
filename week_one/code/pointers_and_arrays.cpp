#include <iostream>

using namespace std;

// function prototype
void print_array(int *, int);

int main(){
	// array variables are constant pointers
	int array[5]{9, 7, 5, 3, 1};
	int *ptr_to_array = array;

	cout << "Element 0 has address: " << &array[0] << '\n';
	cout << "The array decays to a pointer holding address: " << array << '\n';
	cout << "Element 0 has the value: " << *array << '\n';
	cout << "Element 0 has the value: " << array[0] << '\n';

	cout << endl << endl;

	// do some pointer arithmetic
	cout << "ptr_to_array contains: " << ptr_to_array << endl;
	cout << "item at address " << ptr_to_array << " is " << *ptr_to_array << endl;
	ptr_to_array++;
	cout << "ptr_to_array contains: " << ptr_to_array << endl;
	cout << "item at address " << ptr_to_array << " is " << *ptr_to_array << endl;

	cout << endl;

	print_array(array, sizeof(array)/sizeof(array[0]));

	return 0;
}

void print_array(int* array, int size){
	for(int index = 0; index < size; ++index)
		// pointers can be treated as integers.
		/* When calculating the result of a pointer arithmetic expression,
			the compiler always multiplies the integer operand by the size
			of the object being pointed to. This is called scaling.
		*/
		cout << "Element " << index+1 << " lives at address: " << array << ". The value at that address is: " << *array++ << endl;
		// array is being modified by: &array = &array + sizeof(array) * 1

}
