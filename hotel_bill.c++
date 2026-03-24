#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


struct OrderItem {
    string itemName;
    int quantity;
    double price;

    
    double getItemTotal() const {
        return quantity * price;
    }
};

class HotelBill {
private:
    int tableNo;
    string customerName;
    string customerContact;
    vector<OrderItem> items;

public:
   
    void takeOrder() {
        cout << "Enter Table Number: ";
        cin >> tableNo;
        cin.ignore(); 

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Customer Contact: ";
        getline(cin, customerContact);

        int numItems;
        cout << "How many different items did the customer order? ";
        cin >> numItems;

        for (int i = 0; i < numItems; ++i) {
            OrderItem currentItem;
            cout << "\n--- Item " << (i + 1) << " ---" << endl;
            cout << "Item Name: ";
            cin.ignore(); 
            getline(cin, currentItem.itemName);
            
            cout << "Quantity: ";
            cin >> currentItem.quantity;
            
            cout << "Price per unit: ";
            cin >> currentItem.price;

            items.push_back(currentItem);
        }
    }

   
    void generateBill() {
        double totalAmount = 0;

       
        for (const auto& item : items) {
            totalAmount += item.getItemTotal();
        }

       
        double discount = 0;
        if (totalAmount > 5000) {
            discount = totalAmount * 0.20; // 20% discount
        } else if (totalAmount > 3000) {
            discount = totalAmount * 0.10; // 10% discount
        } else if (totalAmount > 1000) {
            discount = totalAmount * 0.05; // 5% discount
        }

        double finalAmount = totalAmount - discount;

       
        cout << "\n----------- Hotel Bill -----------" << endl;
        cout << "Table No.: " << tableNo << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Customer Contact: " << customerContact << endl;
        cout << "Order Details:" << endl;
        
       
        cout << left << setw(15) << "Item" 
             << setw(6) << "Qty" 
             << setw(10) << "Price" 
             << "Total" << endl;

       
        for (const auto& item : items) {
            cout << left << setw(15) << item.itemName 
                 << setw(6) << item.quantity 
                 << setw(10) << item.price 
                 << item.getItemTotal() << endl;
        }

        cout << "----------------------------------" << endl;
        cout << "Total Amount: " << totalAmount << endl;
        cout << "Discount: -" << discount << endl;
        cout << "Final Amount: " << finalAmount << endl;
        cout << "----------------------------------" << endl;
    }
};

int main() {
    HotelBill bill;
    
    
    bill.takeOrder();
    bill.generateBill();

    return 0;
}