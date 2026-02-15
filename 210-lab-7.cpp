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
    cout << "Original array: ";
    displayArray(myStrs, arrSize);
    vector<string>* myStrsPtr = reverseArray(myStrs, arrSize);
    cout << "Reversed array: ";
    displayArray(myStrs, arrSize);

    return 0;
}

vector<string>* reverseArray(vector<string> vectIn, int size) {
// receives a dynamic string array, reverses the elements,
//  and returns a pointer to the modified array (which is the same array??)
    vector<string>* ptr = &vectIn;
    string temp;
    for(int i = 0; i < arrSize / 2; ++i) {
        temp = vectIn.at(i);
        vectIn.at(i) = vectIn.at((size - i) - 1);
        vectIn.at((size - i) - 1) = temp;
    }
    return ptr;
}

void displayArray(vector<string> vectIn, int size) {
    for(int i = 0; i < size; ++i)
        cout << vectIn.at(i) << " ";
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