#include <iostream>
using namespace std;

class NumberSwapper {
    int a, b;
public:
    void setNumbers(int x, int y) { a = x; b = y; }
    void swapNumbers() {
        int temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    NumberSwapper swapObj;
    swapObj.setNumbers(10, 25);
    
    cout << "Before Swapping: ";
    swapObj.display();
    
    swapObj.swapNumbers();
    
    cout << "After Swapping: ";
    swapObj.display();
    return 0;
}