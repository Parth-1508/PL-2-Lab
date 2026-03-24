#include <iostream>
using namespace std;

class NumberPrinter {
public:
    void printSequence(int n) {
        for(int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    NumberPrinter np;
    cout << "Printing 1 to 10: ";
    np.printSequence(10);
    return 0;
}