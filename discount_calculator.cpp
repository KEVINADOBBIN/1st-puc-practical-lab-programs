#include <iostream>
using namespace std;

int main() {
    float totalAmount, discount = 0, finalAmount;

    cout << "Input the total amount: ";
    cin >> totalAmount;

    // Calculate discount
    if (totalAmount > 1000) {
        discount = 0.08 * totalAmount; // 8% discount
    }

    // Calculate final amount
    finalAmount = totalAmount - discount;

    cout << "\nTotal Amount = " << totalAmount << endl;
    cout << "Discount = " << discount << endl;
    cout << "Final Amount = " << finalAmount << endl;

    return 0;
}
