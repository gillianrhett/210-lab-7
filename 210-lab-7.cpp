// COMSC-210 | Lab 7 | Gillian Rhett
#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string*, int);
int* reverseIntArray(int*, int); // TESTING
void displayArray(string*, int);
void displayIntArray(int*, int); // TESTING

const int arrSize = 6;

int main() {
    // create a dynamic array of strings
    // problem: the size of strings varies
    // I could use a vector?

    /*
    cout << "Original array: ";
    displayArray(strArr, arrSize);
    cout << "Reversed array: ";
    displayArray(reverseArray(strArr, arrSize), arrSize);
    
    delete strArr;    
    strArr = nullptr;
    */
    return 0;
}

string* reverseArray(string* arr, int size) {
// reverse the elements in the given array
//  and return a pointer to this reversed array
    string* ptr;
    ptr = arr;
    string temp;
    for(int i = 0; i < size / 2; ++i) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + ((size - i) - 1));
        *(ptr + ((size - i) - 1)) = temp;
    }
    return ptr;
}

void displayArray(string* arr, int size) {
// show the array elements in order on one line
    for(int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// TESTING making sure my functions work
int* reverseIntArray(int* arr, int size) {
// reverse the elements in the given array
//  and return a pointer to this reversed array
    int* ptr;
    ptr = arr;
    int temp;
    for(int i = 0; i < size / 2; ++i) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + ((size - i) - 1));
        *(ptr + ((size - i) - 1)) = temp;
    }
    return ptr;
}

void displayIntArray(int* arr, int size) {
// show the array elements in order on one line
    for(int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}