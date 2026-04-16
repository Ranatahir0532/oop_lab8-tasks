#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor with validation
    Rectangle(double l, double w) {
        if (l > 0 && w > 0) {
            length = l;
            width = w;
        } else {
            cout << "Invalid input! Setting default values (1,1)\n";
            length = 1;
            width = 1;
        }
    }

    // Friend function declaration
    friend void calculate(Rectangle r);
};

// Friend function definition
void calculate(Rectangle r) {
    double area = r.length * r.width;
    double perimeter = 2 * (r.length + r.width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

int main() {
    double l, w;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    Rectangle r(l, w);
    calculate(r);

    return 0;
}
