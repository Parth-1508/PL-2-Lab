#include <iostream>
using namespace std;

class YearChecker {
public:
    void checkLeap(int year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << year << " is a Leap Year." << endl;
        else
            cout << year << " is not a Leap Year." << endl;
    }
};

int main() {
    YearChecker yc;
    yc.checkLeap(2024);
    yc.checkLeap(2023);
    return 0;
}