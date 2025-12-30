#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int a[100];
    int sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Calculating the sum
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    // Calculating the average
    average = (float)sum / n;

    cout << "Sum of " << n << " numbers = " << sum << endl;
    cout << "Average of " << n << " numbers = " << average << endl;

    return 0;
}
