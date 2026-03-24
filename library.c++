#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
    string title;
    string author;
    int availableCopies;

public:
    void setBook(string t, string a, int copies) {
        title = t;
        author = a;
        availableCopies = copies;
    }

    void displayDetails() {
        cout << "Book: " << title << " | Author: " << author 
             << " | Copies Available: " << availableCopies << endl;
    }

    void issueBook() {
        if (availableCopies > 0) {
            availableCopies--;
            cout << "Success: '" << title << "' has been issued to you." << endl;
        } else {
            cout << "Sorry: '" << title << "' is currently out of stock." << endl;
        }
    }
};

int main() {
    LibraryBook book1;
    book1.setBook("The C++ Programming Language", "Bjarne Stroustrup", 1);
    
    book1.displayDetails();
    
    cout << "\nAttempting to issue book..." << endl;
    book1.issueBook();
    
    cout << "\nAttempting to issue again..." << endl;
    book1.issueBook(); 
    
    return 0;
}