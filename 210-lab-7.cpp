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
    
    
    string* revStrArr = reverseArray(strArr, arrSize);

    // deallocate memory
    delete[] strArr;
    strArr = nullptr;

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

}

/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string>* reverseArray(vector<string>, int);
void displayArray(vector<string>);

const int arrSize = 5;

int main() {
// create a dynamic array of strings and reverse it    
    vector<string> myStrs {"alpha", "beta", "gamma", "delta", "epsilon"};
    cout << "Original array: ";
    displayArray(myStrs);
    vector<string>* myStrsRev = reverseArray(myStrs, arrSize);
    cout << "Reversed array: ";
    displayArray(*myStrsRev);

    delete myStrsRev;
    myStrsRev = nullptr;

    return 0;
}

vector<string>* reverseArray(vector<string> vectIn, int size) {
// receives a dynamic string array, reverses the elements,
    vector<string>* revVectPtr = new vector<string>;
    // necessary in order for the reversed vector to still exist after function ends
    // caller will have to deallocate it

    for(int i = 0; i < arrSize; ++i)
        (*revVectPtr).push_back(vectIn.at((size - i) - 1));
    return revVectPtr;
}

void displayArray(vector<string> vectIn) {
// display the elements from the vector on one line
    for(string s : vectIn)
        cout << s << " ";
    cout << endl;
}
*/