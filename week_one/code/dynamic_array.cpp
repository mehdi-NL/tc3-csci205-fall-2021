#include <iostream>
#include <cstddef> // std::size_t

using namespace std;

void fill_array(int*, size_t);
void print_array(int *, size_t);

int main()
{
    cout << "Enter a positive integer: ";
    size_t length;
    cin >> length;

    int *array = new int[length];

    cout << "I just allocated an array of integers of length " << length << endl;
	fill_array(array, length);
	print_array(array, length);

    delete[] array; // use array delete to deallocate array

    return 0;
}

void fill_array(int *array, size_t size){
	for(size_t index = 0; index < size; ++index){
		*array = index * 10;
		++array;
	}
}

void print_array(int *array, size_t size){
	for (size_t index = 0; index < size; ++index){
		cout << "Array element " << index + 1 << " is: " << *array << endl;;
		array++;
	}
}
