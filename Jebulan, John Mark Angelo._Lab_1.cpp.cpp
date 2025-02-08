#include <iostream>
using namespace std;

int myArray[30];
int numElem = 0;
int MaxElem = 20;

void TraverseArray() {
    cout << "Showing elements in my array:\n";
    for (int i = 0; i < numElem; i++) {
        cout << myArray[i] << " | ";
    }
    cout << "\n";
}

string insertAtTheEnd(int num) {
    if (numElem != MaxElem) {
        myArray[numElem] = num;
        numElem++;
        return "An element is successfully inserted at the end!\n";
    }
    return "The array is full. Please remove elements before inserting a new one.\n";
}

int main() {
    myArray[0] = 0;
    myArray[1] = 1;
    myArray[2] = 2;
    myArray[3] = 3;
    myArray[4] = 4;
    
    TraverseArray();
    
    cout << insertAtTheEnd(3);
    cout << insertAtTheEnd(7);
    cout << insertAtTheEnd(9);
    cout << insertAtTheEnd(11);
    cout << insertAtTheEnd(15);

    TraverseArray();  // To show the updated array with new elements

    return 0;
}