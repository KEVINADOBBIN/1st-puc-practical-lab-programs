#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;

    cout << "Input a number: ";
    cin >> n;

    int original = n; // store original number for display

    // Calculating the sum of digits
    while (n != 0) {
        digit = n % 10;    // Extract last digit
        sum += digit;      // Add to sum
        n = n / 10;        // Remove last digit
    }

    cout << "The number is = " << original << endl;
    cout << "Sum of the digits = " << sum << endl;

    return 0;
}
