#include <iostream>
using namespace std;

int main() {
    float radius, area, circum;
    const float PI = 3.14285;

    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Calculate area of the circle
    area = PI * radius * radius;

    // Calculate circumference of the circle
    circum = 2 * PI * radius;

    cout << "Radius = " << radius << endl;
    cout << "Area = " << area << endl;
    cout << "Circumference = " << circum << endl;

    return 0;
}
