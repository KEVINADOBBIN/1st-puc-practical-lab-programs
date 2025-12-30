#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, temp;

    cout << "Enter number of elements in the list: ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Bubble Sort (Ascending Order)
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Array elements in ascending order:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
