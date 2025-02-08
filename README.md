#include <iostream>
using namespace std;

const int maxElem = 50;
int array[maxElem];
int count = 0;

// Function to traverse the array
void traverseArray() {
    cout << "Elements in the array: ";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at the end of the array
void insertAtTheEnd(int element) {
    if (count < maxElem) {
        array[count] = element;
        count++;
    } else {
        cout << "Array is full. Cannot insert more elements." << endl;
    }
}

// Function to insert an element at the beginning of the array
void insertAtTheBeginning(int element) {
    if (count < maxElem) {
        for (int i = count; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = element;
        count++;
    } else {
        cout << "Array is full. Cannot insert more elements." << endl;
    }
}

// Function to insert an element at a given position in the array
void insertAtGivenPosition(int element, int position) {
    if (count < maxElem && position >= 0 && position <= count) {
        for (int i = count; i > position; i--) {
            array[i] = array[i - 1];
        }
        array[position] = element;
        count++;
    } else {
        cout << "Invalid position or array is full." << endl;
    }
}

// Function to insert an element into a sorted array
void insertAtSortedArray(int element) {
    if (count < maxElem) {
        int position = count;
        for (int i = count - 1; i >= 0; i--) {
            if (array[i] > element) {
                array[i + 1] = array[i];
                position = i;
            } else {
                break;
            }
        }
        array[position] = element;
        count++;
    } else {
        cout << "Array is full. Cannot insert more elements." << endl;
    }
}

// Function to perform bubble sort on the array
void bubbleSort() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to delete an element from the end of the array
void deleteFromTheEnd() {
    if (count > 0) {
        count--;
    } else {
        cout << "Array is empty. Cannot delete elements." << endl;
    }
}

// Function to delete an element from the beginning of the array
void deleteFromTheBeginning() {
    if (count > 0) {
        for (int i = 0; i < count - 1; i++) {
            array[i] = array[i + 1];
        }
        count--;
    } else {
        cout << "Array is empty. Cannot delete elements." << endl;
    }
}

// Function to delete an element from a given position in the array
void deleteFromGivenPosition(int position) {
    if (count > 0 && position >= 0 && position < count) {
        for (int i = position; i < count - 1; i++) {
            array[i] = array[i + 1];
        }
        count--;
    } else {
        cout << "Invalid position or array is empty." << endl;
    }
}

// Function to perform binary search on the array
int binarySearch(int element) {
    int low = 0;
    int high = count - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (array[mid] == element) {
            return mid;
        } else if (array[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    // Part 2: Insert Operation
    insertAtTheEnd(3);
    insertAtTheEnd(7);
    insertAtTheEnd(9);
    insertAtTheEnd(11);
    insertAtTheEnd(15);

    // Part 2: Insert Operation
    cout << "Elements in the array after inserting at the end: ";
    traverseArray();

    // Self-Assessment
```
