#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudent() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
    }
};


class Result : public Student { 
private:
    int marks;

public:
    void getResult() {
        getStudent(); 
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayResult() {
        displayStudent(); 
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Result s1;
    s1.getResult();
    s1.displayResult();
    return 0;
}