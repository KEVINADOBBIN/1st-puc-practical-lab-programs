#include <iostream>
using namespace std;

int main() {
    int totalDays, years, months, days, rem;

    cout << "Enter total days: ";
    cin >> totalDays;

    // Calculate years
    years = totalDays / 365;
    rem = totalDays % 365;

    // Calculate months
    months = rem / 30;

    // Calculate days
    days = rem % 30;

    cout << "\nTotal days = " << totalDays << endl;
    cout << "Years = " << years << endl;
    cout << "Months = " << months << endl;
    cout << "Days = " << days << endl;

    return 0;
}
