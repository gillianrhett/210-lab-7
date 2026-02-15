// COMSC-210 | Lab 7 | Gillian Rhett
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string>* reverseArray(vector<string>, int);
void displayArray(vector<string>, int);
int* reverseIntArray(int*, int); // TESTING
void displayIntArray(int*, int); // TESTING

const int arrSize = 5;

int main() {
    // create a dynamic array of strings
    // problem: the size of strings varies
    
    // trying it with a vector
    vector<string> myStrs {"alpha", "beta", "gamma", "delta", "epsilon"};


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

vector<string>* reverseArray(vector<string> vectIn, int size) {
    vector<string>* ptr = &vectIn;
    string temp;
    for(int i = 0; i < arrSize; ++i) {

    }
    return ptr;
}

void displayArray(vector<string>, int) {

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