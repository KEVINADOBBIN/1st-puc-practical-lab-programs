#include <iostream>
using namespace std;

int main()
{
    int n, count;
    long first = 0, second = 1, next;

    cout << "Enter number of elements in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (count = 1; count <= n; count++)
    {
        cout << first << "\t";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
