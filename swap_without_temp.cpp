#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Input 1st number: ";
    cin >> a;

    cout << "Input 2nd number: ";
    cin >> b;

    cout << "\nValue before swap" << endl;
    cout << "Value of 1st number = " << a << endl;
    cout << "Value of 2nd number = " << b << endl;

    // Swapping without using third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nValue after swap" << endl;
    cout << "Value of 1st number = " << a << endl;
    cout << "Value of 2nd number = " << b << endl;

    return 0;
}
