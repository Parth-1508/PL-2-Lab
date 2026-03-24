#include <iostream>
using namespace std;

class PrimeChecker {
public:
    void checkPrime(int n) {
        if (n <= 1) {
            cout << n << " is not prime." << endl;
            return;
        }
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << n << " is not prime." << endl;
                return;
            }
        }
        cout << n << " is a prime number." << endl;
    }
};

int main() {
    PrimeChecker obj;
    obj.checkPrime(17);
    obj.checkPrime(20);
    return 0;
}