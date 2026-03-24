#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   // private data

public:
    BankAccount(double b) {
        balance = b;
    }

    // Friend function declaration
    friend void audit(BankAccount acc);
};

// Friend function definition
void audit(BankAccount acc) {
    // Accessing private member
    cout << "Account balance is: ₹" << acc.balance << endl;
}

int main() {
    BankAccount myAcc(50000);
    audit(myAcc);   // auditor checks balance
    return 0;
}
