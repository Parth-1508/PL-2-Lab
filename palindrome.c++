#include <iostream>
using namespace std;

class Palindrome {
public:
    // Inline function request
    inline void checkPalindrome(int n) {
        int original = n, reversed = 0, remainder;
        while (n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }
        if (original == reversed)
            cout << original << " is a Palindrome." << endl;
        else
            cout << original << " is not a Palindrome." << endl;
    }
};

int main() {
    Palindrome p;
    p.checkPalindrome(12321);
    p.checkPalindrome(12345);
    return 0;
}