#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(1), width(1) {}

    double area() const {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    cout << "The area of the rectangle is: " << rect.area() << endl;

    return 0;
}