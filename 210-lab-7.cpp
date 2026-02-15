// COMSC-210 | Lab 7 | Gillian Rhett
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string>* reverseArray(vector<string>, int);
void displayArray(vector<string>);

const int arrSize = 5;

int main() {
    // create a dynamic array of strings
    // problem: the size of strings varies
    
    // trying it with a vector
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
    for(string s : vectIn)
        cout << s << " ";
    cout << endl;
}