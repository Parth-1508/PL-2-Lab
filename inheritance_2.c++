#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int empId;
    string name;
    double salary;

public:
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
};


class Department : public Employee { 
protected:
    string deptName;

public:
    void getDepartment() {
        getEmployee();
        cout << "Enter Department Name: ";
        cin >> deptName;
    }

    void displayDepartment() {
        displayEmployee();
        cout << "\nDepartment: " << deptName;
    }
};

class PF : public Department { 
    double pfAmount;

public:
    void getPF() {
        getDepartment();
        pfAmount = salary * 0.12; 
    }

    void displayPF() {
        displayDepartment();
        cout << "\nPF Amount (12% of Salary): " << pfAmount << endl;
    }
};


class Manager : public Employee { 
private:
    double bonus;

public:
    void getManager() {
        getEmployee();
        bonus = salary * 0.10; 
    }

    void displayManager() {
        displayEmployee();
        cout << "\nBonus (10% of Salary): " << bonus << endl;
    }
};

int main() {
    cout << "----- Multilevel Inheritance (Employee -> Department -> PF) -----\n";
    PF emp1;
    emp1.getPF();
    emp1.displayPF();

    cout << "\n\n----- Hierarchical Inheritance (Employee -> Manager) -----\n";
    Manager mgr1;
    mgr1.getManager();
    mgr1.displayManager();

    return 0;
}