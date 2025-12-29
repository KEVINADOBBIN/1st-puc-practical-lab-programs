#include <iostream>
using namespace std;

int main() {
    int units;
    float billAmount = 0;

    cout << "Input number of units consumed: ";
    cin >> units;

    // Calculate bill amount slab-wise
    if (units <= 29) { // First slab: 0-29 units
        billAmount = units * 3.50;
    }
    else if (units <= 49) { // Next slab: 30-49 units
        billAmount = 29 * 3.50 + (units - 29) * 4.25;
    }
    else if (units <= 99) { // Next slab: 50-99 units
        billAmount = 29 * 3.50 + 20 * 4.25 + (units - 49) * 5.28;
    }
    else { // Above 99 units
        billAmount = 29 * 3.50 + 20 * 4.25 + 50 * 5.28 + (units - 99) * 5.85;
    }

    cout << "\nTotal units consumed = " << units << endl;
    cout << "Total Bill Amount = " << billAmount << " units" << endl;

    return 0;
}
