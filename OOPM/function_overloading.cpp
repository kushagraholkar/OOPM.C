#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}
int area(int length, int width) {
    return length * width;
}

float area(float radius) {
    return 3.14f * radius * radius;
}

int main() {
    
    cout << "Area of square = " << area(4) << endl;
    cout << "Area of rectangle = " << area(4,5) << endl;
    cout << "Area of circle = " << area(2.5) << endl;

    return 0;
}


