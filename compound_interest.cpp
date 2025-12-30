#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float p, r, amount, compoundInterest;
    int t, y = 1;

    cout << "Enter Principal Amount: ";
    cin >> p;

    cout << "Enter Time (in years): ";
    cin >> t;

    cout << "Enter Rate of Interest: ";
    cin >> r;

    float principal = p;

    cout << fixed << setprecision(2);

    // Calculating amount year by year
    while (y <= t)
    {
        amount = p * (1 + r / 100);
        cout << "Amount after year " << y << " = " << amount << endl;
        p = amount;
        y++;
    }

    compoundInterest = amount - principal;

    cout << "\nCompound Interest = " << compoundInterest << endl;

    return 0;
}
