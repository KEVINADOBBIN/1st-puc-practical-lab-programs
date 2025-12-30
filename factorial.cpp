#include <iostream>
using namespace std;

int main()
{
    int n, i;
    long long fact = 1;

    cout << "Input a non-negative number: ";
    cin >> n;

    // Calculating factorial
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " = " << fact;

    return 0;
}
