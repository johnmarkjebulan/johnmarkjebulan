#include <iostream>
#include <string>
#include <queue>
#include <list>

using namespace std;

// Define a structure for the stock item
struct StockItem {
    string name;
    int quantity;
    float price;
};

// Function to stock management using arrays
void manageStockArray() {
    const int MAX_STOCK = 100;
    StockItem stock[MAX_STOCK];
    int numItems = 0;

    // Add some sample items
    stock[numItems++] = {"ItemA", 10, 20.5};
    stock[numItems++] = {"ItemB", 5, 15.75};

    // Access and stock management items
    for (int i = 0; i < numItems; ++i) {
        cout << "Stock: " << stock[i].name << ", Quantity: " << stock[i].quantity << ", Price: " << stock[i].price << endl;
    }
}

// Function to stock management using linked list
class StockLinkedList {
private:
    struct Node {
        StockItem data;
        Node* next;
    };

    Node* head;

public:
    StockLinkedList() : head(nullptr) {}

    // Add item to the linked list
    void addItem(StockItem item) {
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = head;
        head = newNode;
    }

    // Display all items in the linked list
    void displayItems() {
        Node* current = head;
        while (current != nullptr) {
            cout << "Stock: " << current->data.name << ", Quantity: " << current->data.quantity << ", Price: " << current->data.price << endl;
            current = current->next;
        }
    }
};

// Function to stock management using queue
void manageStockQueue() {
    queue<StockItem> stockQueue;

    // Add some sample items
    stockQueue.push({"ItemA", 10, 20.5});
    stockQueue.push({"ItemB", 5, 15.75});

    // Access and manipulate stock items
    while (!stockQueue.empty()) {
        StockItem item = stockQueue.front();
        cout << "Stock: " << item.name << ", Quantity: " << item.quantity << ", Price: " << item.price << endl;
        stockQueue.pop();
    }
}

int main() {
    // stock management using arrays
    cout << "Stock management using arrays:" << endl;
    manageStockArray();

    // Stock management using linked list
    cout << "\nStock management using linked list:" << endl;
    StockLinkedList linkedList;
    linkedList.addItem({"ItemA", 10, 20.5});
    linkedList.addItem({"ItemB", 5, 15.75});
    linkedList.displayItems();

    // Stock management using queue
    cout << "\nStock management using queue:" << endl;
    manageStockQueue();

    return 0;
}
