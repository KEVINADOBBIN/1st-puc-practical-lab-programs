#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int smallest, largest, secondLargest;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "Enter 3rd number: ";
    cin >> c;

    // Assume first number as largest and smallest
    largest = a;
    smallest = a;

    // Find largest
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;

    // Find smallest
    if (b < smallest)
        smallest = b;
    if (c < smallest)
        smallest = c;

    // Find second largest
    secondLargest = (a + b + c) - (largest + smallest);

    cout << "\n1st number = " << a << endl;
    cout << "2nd number = " << b << endl;
    cout << "3rd number = " << c << endl;

    cout << "\nLargest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Second Largest = " << secondLargest << endl;

    return 0;
}
