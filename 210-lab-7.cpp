// COMSC-210 | Lab 7 | Gillian Rhett
#include <iostream>
#include <string>
using namespace std;

string* reverseArray(string*, int);
void displayArray(string*, int);

const int arrSize = 5;

int main() {
    // create a dynamic array of strings
    // problem: the size of strings varies
    // I could use a vector?

    return 0;
}

string* reverseArray(string* arr, int size) {
// reverse the elements in the given array
//  and return a pointer to this reversed array
    string* ptr;
    ptr = arr;
    string temp;
    for(int i = 0; i < size / 2; ++i) {
        // TODO finish this
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