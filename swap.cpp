#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Input 1st number: ";
    cin >> a;

    cout << "Input 2nd number: ";
    cin >> b;

    cout << "\nValue before swap" << endl;
    cout << "Value of first number = " << a << endl;
    cout << "Value of second number = " << b << endl;

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    cout << "\nValue after swap" << endl;
    cout << "Value of first number = " << a << endl;
    cout << "Value of second number = " << b << endl;

    return 0;
}
