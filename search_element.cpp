#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, element, posi = -1;

    cout << "Enter number of elements in the list: ";
    cin >> n;

    cout << "Enter array elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter an element to be searched: ";
    cin >> element;

    // Searching whether the element exists
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            posi = i;
            break;
        }
    }

    if (posi == -1)
        cout << element << " does not exist!" << endl;
    else
        cout << element << " exists at position " << posi + 1 << endl;

    return 0;
}
