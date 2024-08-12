#include <iostream>
#include <vector>
#include <algorithm> // for searching
#include <iomanip>   // for formatting output

using namespace std;

// Define structure for a store item
struct StoreItem {
    int id;
    string name;
    int quantity;
    float price;
};

// Function prototypes
void addItem(vector<StoreItem> &stock);
void updateItem(vector<StoreItem> &stock);
void deleteItem(vector<StoreItem> &stock);
void displayStock(const vector<StoreItem> &stock);
void searchItem(const vector<StoreItem> &stock);
void initializeStock(vector<StoreItem> &stock);
void sellItem(vector<StoreItem> &stock);
void listAllItems(const vector<StoreItem> &stock);

int main() {
    vector<StoreItem> stock;

    // Initialize stock with predefined store
    initializeStock(stock);

    int choice;
    do {
        cout << "\nStore Stock Management System\n";
        cout << "1. Add Brand\n";
        cout << "2. Update Store\n";
        cout << "3. Delete Brand\n";
        cout << "4. Display stock\n";
        cout << "5. Sold Stock\n";
        cout << "6. List All Items\n"; // New option added
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addItem(stock);
                break;
            case 2:
                updateItem(stock);
                break;
            case 3:
                deleteItem(stock);
                break;
            case 4:
                displayStock(stock);
                break;
            case 5:
                sellItem(stock);
                break;
            case 6:
                listAllItems(stock); // Call the new function
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}

// Function to initialize the stock with predefined store
void initializeStock(vector<StoreItem> &stock) {
    vector<StoreItem> initialStore = {
        // Initial stock items
        {1, "Shoes", 10, 59.99},
        {2, "Socks", 20, 26.95},
        {3, "Gloves", 15, 29.99},
        {4, "Boxer", 12, 39.99},
        {5, "Jd toilet perfume", 50, 0.00},
        {6, "Aficionado", 30, 4.99},
        {7, "Pants Blue", 25, 80.00},
        {8, "Skirt", 22, 110.00},
        {9, "Case", 8, 59.99},
        {10, "Tempered", 18, 29.99},
        {11, "Animal Crossing: New Horizons", 16, 59.99},
        {12, "Overwatch", 14, 39.99},
        {13, "Thumb Gloves", 11, 29.99},
        {14, "Umbrella", 7, 59.99},
        {15, "Bag", 5, 59.99},
        {16, "Short", 60, 50.00},
        {17, "Contact Lenses", 35, 60.00},
        {18, "Caps", 13, 39.99},
        {19, "Jacket", 9, 59.99},
        {20, "Zipper", 17, 19.99},
        {21, "Foot sock", 23, 29.99},
        {22, "Mouse", 28, 14.99},
        {23, "Shades", 19, 24.99},
        {24, "Hair dryer", 21, 59.99},
        {25, "Neck tie", 11, 59.99},
        {26, "Seiko Watch", 8, 59.99},
        {27, "Apple watch", 6, 59.99},
        {28, "Earpods", 12, 29.99},
        {29, "Toothbrush", 20, 19.99},
        {30, "Books", 15, 29.99},
        {31, "Ball pen", 10, 39.99},
        {32, "Card board", 14, 39.99},
        {33, "Adapter", 22, 24.99},
        {34, "Mcbook Laptop", 9, 59.99},
        {35, "Collgate", 13, 29.99},
        {36, "Ring berry", 16, 19.99},
        {37, "Cellphone", 40, 0.00},
        {38, "Keyboard", 18, 24.99},
        {39, "Cct camera", 21, 29.99},
        {40, "Aircondition", 17, 59.99},
        {41, "Blower", 12, 59.99},
        {42, "Table", 27, 19.99},
        {43, "Mirror", 14, 59.99},
        {44, "T_shirt", 11, 49.99},
        {45, "Eye glass", 13, 30.00},
        {46, "Earings", 15, 59.99},
        {47, "Headphones", 50, 9.99},
        {48, "Doorlock", 8, 59.99}
    };

    stock = initialStore;
    cout << "Stock initialized with predefined store.\n";
}

// Function to add a store to the stock
void addItem(vector<StoreItem> &stock) {
    StoreItem newItem;
    cout << "\nEnter brand ID: ";
    cin >> newItem.id;
    cout << "Enter brand name: ";
    cin.ignore();
    getline(cin, newItem.name);
    cout << "Enter quantity: ";
    cin >> newItem.quantity;
    cout << "Enter price: ";
    cin >> newItem.price;
    stock.push_back(newItem);
    cout << "Brand added successfully.\n";
}

// Function to update an existing store in the stock
void updateItem(vector<StoreItem> &stock) {
    int id;
    cout << "\nEnter stock ID to update: ";
    cin >> id;
    auto it = find_if(stock.begin(), stock.end(), [id](const StoreItem &item) {
        return item.id == id;
    });
    if (it != stock.end()) {
        cout << "Enter new quantity: ";
        cin >> it->quantity;
        cout << "Enter new price: ";
        cin >> it->price;
        cout << "Stock updated successfully.\n";
    } else {
        cout << "Stock not found.\n";
    }
}

// Function to delete a store from the stock
void deleteItem(vector<StoreItem> &stock) {
    int id;
    cout << "\nEnter stock ID to delete: ";
    cin >> id;
    auto it = find_if(stock.begin(), stock.end(), [id](const StoreItem &item) {
        return item.id == id;
    });
    if (it != stock.end()) {
        stock.erase(it);
        cout << "Stock deleted successfully.\n";
    } else {
        cout << "Stock not found.\n";
    }
}

// Function to display all store in the stock
void displayStock(const vector<StoreItem> &stock) {
    cout << "\nStock:\n";
    cout << left << setw(5) << "ID"
         << left << setw(40) << "Name"
         << left << setw(10) << "Quantity"
         << left << setw(10) << "Price" << endl;

    cout << string(65, '-') << endl; // Separator line

    for (const auto &item : stock) {
        cout << left << setw(5) << item.id
             << left << setw(40) << item.name
             << left << setw(10) << item.quantity
             << left << setw(10) << fixed << setprecision(2) << item.price << endl;
    }
}

// Function to search for a store in the stock
void searchItem(const vector<StoreItem> &stock) {
    string name;
    cout << "\nEnter game name to search: ";
    cin.ignore();
    getline(cin, name);
    auto it = find_if(stock.begin(), stock.end(), [name](const StoreItem &item) {
        return item.name == name;
    });
    if (it != stock.end()) {
        cout << "Stock found:\n";
        cout << left << setw(5) << "ID"
             << left << setw(40) << "Name"
             << left << setw(10) << "Quantity"
             << left << setw(10) << "Price"
             << left << setw(10) << fixed << setprecision(2) << it->price << endl;
    } else {
        cout << "Stock not found.\n";
    }
}

// Function to handle sold stock
void sellItem(vector<StoreItem> &stock) {
    int id;
    int quantitySold;
    cout << "\nEnter stock ID to sell: ";
    cin >> id;
    auto it = find_if(stock.begin(), stock.end(), [id](const StoreItem &item) {
        return item.id == id;
    });
    if (it != stock.end()) {
        cout << "Enter quantity to sell: ";
        cin >> quantitySold;
        if (quantitySold <= it->quantity) {
            it->quantity -= quantitySold;
            cout << "Sold " << quantitySold << " units of " << it->name << ".\n";
            if (it->quantity == 0) {
                cout << "Stock of " << it->name << " is now empty.\n";
            }
        } else {
            cout << "Insufficient stock. Available quantity is " << it->quantity << ".\n";
        }
    } else {
        cout << "Stock not found.\n";
    }
}

// Function to list all items
void listAllItems(const vector<StoreItem> &stock) {
    cout << "\nList of All Items:\n";
    cout << left << setw(5) << "ID"
         << left << setw(40) << "Name"
         << left << setw(10) << "Quantity"
         << left << setw(10) << "Price" << endl;

    cout << string(65, '-') << endl; // Separator line

    for (const auto &item : stock) {
        cout << left << setw(5) << item.id
             << left << setw(40) << item.name
             << left << setw(10) << item.quantity
             << left << setw(10) << fixed << setprecision(2) << item.price << endl;
    }
}
