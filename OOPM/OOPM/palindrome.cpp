#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int rev = 0;

    while(num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    return (rev == original);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPalindrome(n)) {
        cout << n << " is a Palindrome number." << endl;
    } else {
        cout << n << " is NOT a Palindrome number." << endl;
    }

    return 0;
}
