#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

// StockItem structure representing a stock item
struct StockItem {
    string itemName;
    int quantity;

    StockItem(const string& name, int qty) : itemName(name), quantity(qty) {}
};

// StockNode structure for linked list implementation
struct StockNode {
    string itemName;
    int quantity;
    StockNode* next;

    StockNode(const string& name, int qty, StockNode* nxt = nullptr) : itemName(name), quantity(qty), next(nxt) {}
};

// StockManagement class to manage stock using array, linked list, and queue
class StockManagement {
private:
    vector<StockItem> stockArray; // Vector for stock items
    StockNode* head; // Linked list head
    queue<StockItem> stockQueue; // Queue for stock items

public:
    StockManagement() : head(nullptr) {}

    ~StockManagement() {
        StockNode* current = head;
        while (current) {
            StockNode* next = current->next;
            delete current;
            current = next;
        }
    }

    // Add a new item to the stock array
    void addItemToArray(const string& name, int qty) {
        stockArray.push_back(StockItem(name, qty));
        cout << "Item added to stock array: " << name << " (Quantity: " << qty << ")" << endl;
    }

    // Add a new item to the stock linked list
    void addItemToLinkedList(const string& name, int qty) {
        StockNode* newNode = new StockNode(name, qty);
        if (!head) {
            head = newNode;
        } else {
            StockNode* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Item added to stock linked list: " << name << " (Quantity: " << qty << ")" << endl;
    }

    // Add a new item to the stock queue
    void addItemToQueue(const string& name, int qty) {
        StockItem newItem(name, qty);
        stockQueue.push(newItem);
        cout << "Item added to stock queue: " << name << " (Quantity: " << qty << ")" << endl;
    }

    // Display all items in the stock array
    void displayArray() {
        cout << "===== Stock Array =====" << endl;
        if (stockArray.empty()) {
            cout << "No items in stock array." << endl;
        } else {
            for (size_t i = 0; i < stockArray.size(); ++i) {
                cout << "Item " << i + 1 << ": " << stockArray[i].itemName << " - Quantity: " << stockArray[i].quantity << endl;
            }
        }
        cout << "=======================" << endl;
    }

    // Display all items in the stock linked list
    void displayLinkedList() {
        cout << "===== Stock Linked List =====" << endl;
        if (!head) {
            cout << "No items in stock linked list." << endl;
        } else {
            StockNode* temp = head;
            int count = 1;
            while (temp) {
                cout << "Item " << count << ": " << temp->itemName << " - Quantity: " << temp->quantity << endl;
                temp = temp->next;
                count++;
            }
        }
        cout << "=============================" << endl;
    }

    // Display all items in the stock queue
    void displayQueue() {
        cout << "===== Stock Queue =====" << endl;
        if (stockQueue.empty()) {
            cout << "No items in stock queue." << endl;
        } else {
            int count = 1;
            queue<StockItem> tempQueue = stockQueue;
            while (!tempQueue.empty()) {
                StockItem item = tempQueue.front();
                tempQueue.pop();
                cout << "Item " << count << ": " << item.itemName << " - Quantity: " << item.quantity << endl;
                count++;
            }
        }
        cout << "========================" << endl;
    }
};

int main() {
    StockManagement stockManager; // Create a stock management object

    // User input for adding items
    string itemName;
    int quantity;
    cout << "Enter item name: ";
    getline(cin, itemName);
    cout << "Enter quantity: ";
    cin >> quantity;

    // Add items using different data structures
    stockManager.addItemToArray(itemName, quantity);
    stockManager.addItemToLinkedList(itemName, quantity);
    stockManager.addItemToQueue(itemName, quantity);

    // Display stock using different data structures
    stockManager.displayArray();
    stockManager.displayLinkedList();
    stockManager.displayQueue();

    return 0;
}
