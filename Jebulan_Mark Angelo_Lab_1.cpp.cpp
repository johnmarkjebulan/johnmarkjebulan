#include <iostream>

using namespace std;



int myArray[30];
int NumElem = 0;
int MaxElem = 20;

void traverseArray(){
    cout << "Showing elements in my array \n";
    for (int i = 0; i < NumElem; i++){
        cout << myArray[i] << "|";
    }
    cout << "\n";
}


string InsertAtTheEnd(int num){
    if(NumElem != MaxElem){
        myArray[NumElem] = num;
        NumElem++;
        return "An element is successfully inserted at the end! \n";
    }
    
    return "The array is full. please remove elements before inserting new one. \n";
}

string InsertAtTheBeginning(int num){
    if(NumElem != MaxElem){
        for(int i = NumElem; i >= 0; i--)
            myArray[i+1] = myArray[i];
        
        myArray[0] = num;
        NumElem++;
        return "An element is successfully inserted at the Beginning! \n";
    }
    
    return "The array is full. please remove elements before inserting new one. \n";
}


string InsertAtTheGivenPosition(int num, int position){
    if(NumElem != MaxElem){
        if(position < 0 || position > NumElem) {
            return "invalid position| \n";
        }
       
        
        for(int i = NumElem; i>=position; i--){
            myArray[i+1] = myArray[i-1];
        }
        
        myArray[position + 1] = num;
        NumElem++;
        return "An element is successfully inserted at the specified location! \n";
    }
    
    return "The array is full. please remove elements before inserting new one. \n";
}

int main() {
    
    cout << InsertAtTheBeginning(3);
    cout << InsertAtTheEnd(7);
    cout << InsertAtTheEnd(9);
    cout << InsertAtTheBeginning(20);
    cout << InsertAtTheGivenPosition(37,3);
    cout << InsertAtTheBeginning(256);
    cout << InsertAtTheGivenPosition(128,6);
    cout << InsertAtTheBeginning(19);

    NumElem = 8;
    
    traverseArray();
    
    return 0;
}