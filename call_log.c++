#include <iostream>
#include <string>
using namespace std;

struct Call {
    string phoneNumber;
    string callType;
    string time;
    Call* next;
};

Call* head = NULL;
Call* tail = NULL;

int maxSize = 500;   // storage limit
int currentSize = 0;

// Add Call Record
void addCall(string number, string type, string time) {
    
    // If storage full, delete oldest
    if (currentSize == maxSize) {
        cout << "Storage full. Deleting oldest call...\n";
        
        Call* temp = head;
        head = head->next;
        delete temp;
        currentSize--;
    }

    Call* newNode = new Call();
    newNode->phoneNumber = number;
    newNode->callType = type;
    newNode->time = time;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }

    currentSize++;
    cout << "Call added successfully.\n";
}

// Display Calls
void displayCalls() {

    if (head == NULL) {
        cout << "Call log is empty.\n";
        return;
    }

    Call* current = head;

    cout << "\nRecent Call Logs:\n";
    cout << "----------------------------\n";

    while (current != NULL) {
        cout << "Number: " << current->phoneNumber << endl;
        cout << "Type  : " << current->callType << endl;
        cout << "Time  : " << current->time << endl;
        cout << "----------------------------\n";
        current = current->next;
    }
}

int main() {

    int choice;
    string number, type, time;

    while (true) {

        cout << "\nCALL LOG MANAGEMENT SYSTEM\n";
        cout << "1. Add Call Record\n";
        cout << "2. Display Recent Calls\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Phone Number: ";
            cin >> number;

            cout << "Enter Call Type (Incoming/Outgoing/Missed): ";
            cin >> type;

            cout << "Enter Time: ";
            cin >> time;

            addCall(number, type, time);
            break;
        case 2:
            displayCalls();
            break;
        case 3:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice.\n";
        }
    }
}