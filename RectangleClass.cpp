#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(10.0, 5.0);
    rect.displayDimensions();
    cout << "Area of the rectangle: " << rect.calculateArea() << " square units" << endl;

    return 0;
}