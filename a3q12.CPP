#include <iostream>
using namespace std;

class Shape {
public:

    int area(int side) {
        return side * side;
    }

    int area(int length, int width) {
        return length * width;
    }

    double area(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape shape;

    cout << "Area of square (side = 4): " << shape.area(4) << endl;
    cout << "Area of rectangle (length = 5, width = 6): " << shape.area(5, 6) << endl;
    cout << "Area of circle (radius = 3.5): " << shape.area(3.5) << endl;

    return 0;
}
