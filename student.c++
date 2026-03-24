#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
public:
    void setDetails(string n, int r) {
        name = n;
        rollNo = r;
    }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student students[10]; 
    
    for(int i = 0; i < 10; i++) {
        students[i].setDetails("Student_" + to_string(i+1), 101 + i);
    }

    cout << "--- Student Records ---" << endl;
    for(int i = 0; i < 10; i++) {
        students[i].display();
    }
    return 0;
}