#include <iostream>
using namespace std;

int main()
{
    int num, n, rem;
    bool flag = true;

    cout << "Enter a number: ";
    cin >> num;

    n = num;   // Copying number to another variable

    // Checking power of 2
    while (n > 1)
    {
        rem = n % 2;
        if (rem != 0)
        {
            flag = false;
            break;
        }
        n = n / 2;
    }

    if (flag && num > 0)
        cout << num << " is a power of 2";
    else
        cout << num << " is not a power of 2";

    return 0;
}
