#include <iostream>
#include <string> // Required to use text strings

using namespace std; // Required to use cout and cin without std::

class computerlab
{
public:
    int computernumber;
    string Name;

    void accept_data()
    {
        cout << "Students name: ";
        cin >> Name;
        cout << "Enter computer number: ";
        cin >> computernumber;
    }

    void display_data()
    {
        cout << "Name: " << Name << endl; 
        cout << "Computer Number: " << computernumber << endl;
    }
};

int main()
{
    computerlab abc;
    abc.accept_data();
    cout << "\n--- Displaying Data ---\n";
    abc.display_data();
    return 0;
}