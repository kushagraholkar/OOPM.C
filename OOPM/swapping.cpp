#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue(): a=" << a << " b=" << b << endl;
}

void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Original values: x=" << x << " y=" << y << endl;

    swapValue(x, y);
    cout << "After swapValue(): x=" << x << " y=" << y << " (No change)" << endl;

    swapPointer(&x, &y);
    cout << "After swapPointer(): x=" << x << " y=" << y << endl;

    swapReference(x, y);
    cout << "After swapReference(): x=" << x << " y=" << y << endl;

    return 0;
}
