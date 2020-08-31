/**
 * Section 12 Challenge
 * Date: 2020/08/23
 *
 * Write a C++ function named apply_all that expects two arrays of integers and
 * their sizes and dynamincally allocates a new array of integers whose size is
 * the product of the 2 array sizes.
 *
 * The function should loop through the second array and multiple each element
 * across each element of array 1 and story the product in the newly created
 * array.
 *
 * the function should return a pointer to the newly allocated array.
 *
 * You can also write a print function that expects a pointer to an array of
 * integers and its size and display the elements in the array.
 *
 * For example.
 *
 * Below is the output from the following code which would be in main.
 *
 * int array1[] {1,2,3,4,5};
 * int array2[] {10,20,30};
 *
 * cout << "Array 1: ";
 * print(array2,3);
 *
 * int *results = apply_all(array1,5,array2,3);
 * cout << "Result: ";
 * print(results,15);
 *
 * Array 1: [ 1 2 3 4 5 ]
 * Array 2: [ 10 20 30 ]
 * Result: [10 20 30 40 50 20 40 60 80 100 30 60 90 120 150]
 *
 */

/// includes
#include <iostream>

using namespace std;

/// prototypes
void print(int *array, size_t size);
int *apply_all(int *array1, size_t size1, int *array2, size_t size2);

int main () {

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array 1: ";
    print(array1,5);

    cout << "Array 2: ";
    print(array2,3);

    int *results = apply_all(array1,5,array2,3);
    cout << "Result: ";
    constexpr size_t results_size {5*3};
    print(results,results_size);

    delete [] results;

    cout << endl;
    return 0;
}


void print(int *array, size_t size) {
    cout << "[ ";
    //for(size_t i {0}; i < size; ++i) {
        //cout << *(array + i) << " ";
    //}
    size_t counter {size};
    while (counter != 0) {
        cout << *array++ << " ";
        counter--;
    }
    cout << "]" << endl;
}

int *apply_all(int *array1, size_t size1, int *array2, size_t size2) {

    size_t arr_size {size1*size2};
    int *int_ptr {nullptr};
    int_ptr = new int[arr_size];

    int *int_ptr_idx {int_ptr};
    for(size_t arr2_idx {0}; arr2_idx < size2; ++arr2_idx){
        for(size_t arr1_idx {0}; arr1_idx < size1; ++arr1_idx){
            *int_ptr_idx++ = array1[arr1_idx] * array2[arr2_idx];
        }
    }

    return int_ptr;
}
