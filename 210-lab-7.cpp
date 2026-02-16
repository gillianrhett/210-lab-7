// COMSC-210 | Lab 7 | Gillian Rhett

#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string*, int);
void displayArray(string*, int);

const int arrSize = 5;

int main() {
// create a dynamic array of strings and reverse it
    
    // create and populate the array
    string* strArr = new string[arrSize];
    *(strArr + 0) = "alpha";
    *(strArr + 1) = "beta";
    *(strArr + 2) = "gamma";
    *(strArr + 3) = "delta";
    *(strArr + 4) = "epsilon";
    
    cout << "Original array: ";
    displayArray(strArr, arrSize);
    string* revStrArr = reverseArray(strArr, arrSize);
    cout << "Reversed array: ";
    displayArray(revStrArr, arrSize);

    // deallocate memory
    delete[] strArr;
    strArr = nullptr;
    delete[] revStrArr;
    revStrArr = nullptr;

    return 0;
}

string* reverseArray(string* arr, int size) {
// creates a new array in reverse order from the given array
//   and returns a pointer to the new array
//   this new array will need to be deallocated by the caller
    string* revArr = new string[size];
    for(int i = 0; i < size; ++i)
        *(revArr + i) = *(arr + ((size - i) - 1));
    return revArr;
}

void displayArray(string* arr, int size) {
    for(int i = 0; i < size; ++i)
        cout << *(arr + i) << " ";
    cout << endl;
}