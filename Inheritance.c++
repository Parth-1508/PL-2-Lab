#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    string Name;
    int age;

    Person(string Name, int Age)
    {
        cout << "Parent constructor" << endl;
        this->Name = Name;
        this->age = Age;
    }

    ~Person()
    {
        cout << "Parent destructor" << endl;
    }
};

class student : public Person
{
public: 
    int rollno;
    
    
    student(string N, int age, int rollno) : Person(N, age)
    {
        this->rollno = rollno;
        cout << "Child constructor" << endl;
    }

    void getinfo()
    {
        cout << Name << " " << age << " " << rollno << endl;
    }
    
    ~student()
    {
        cout << "Child destructor" << endl;
    }
};

int main()
{
    student S1("Parth", 18, 37);
    S1.getinfo();
    
    return 0; 
}