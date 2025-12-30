#include <iostream>
using namespace std;

int main()
{
    long num, temp, sum = 0;
    int digit;

    cout << "Enter a 3 digit number: ";
    cin >> num;

    temp = num;   // Copy original number to temporary variable

    // Calculating the sum of the cube of the digits
    while (num > 0)
    {
        digit = num % 10;                 // Extract last digit
        sum = sum + digit * digit * digit; // Cube of digit
        num = num / 10;
    }

    if (temp == sum)
        cout << temp << " is an Armstrong number";
    else
        cout << temp << " is not an Armstrong number";

    return 0;
}
