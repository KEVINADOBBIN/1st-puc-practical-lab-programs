#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i;
    int largest, slargest;

    cout << "Enter number of elements in the list: ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Initialize largest and second largest
    if (a[0] > a[1])
    {
        largest = a[0];
        slargest = a[1];
    }
    else
    {
        largest = a[1];
        slargest = a[0];
    }

    // Find largest and second largest
    for (i = 2; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] > slargest && a[i] != largest)
        {
            slargest = a[i];
        }
    }

    cout << "Largest element = " << largest << endl;
    cout << "Second largest element = " << slargest << endl;

    return 0;
}
