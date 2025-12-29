#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, s, area;

    cout << "Enter value of first side: ";
    cin >> a;

    cout << "Enter value of second side: ";
    cin >> b;

    cout << "Enter value of third side: ";
    cin >> c;

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\nArea = " << area << " square units" << endl;

    return 0;
}
