//write a program to access private element of a class using friend function

#include <iostream>
#include <string> 

using namespace std;

class abc {
private:
    int rollno;
    string Name;

public:
    
    abc(int r, string n) {
        rollno = r;
        Name = n;
    }

    friend void display(abc obj);
};

void display(abc obj) {
    cout << "\nStudent Details" << endl;
    cout << "Roll No: " << obj.rollno << endl;
    cout << "Name: " << obj.Name << endl;
}

int main() {
    int r;
    string n;

    cout << "Enter Roll Number: ";
    cin >> r;
    
    cout << "Enter Name: ";
    cin >> n;

    abc student(r, n);

    display(student);

    return 0;
}
