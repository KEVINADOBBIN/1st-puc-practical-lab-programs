#include <iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3, marks4;
    int total;
    float per;

    cout << "Enter first subject marks: ";
    cin >> marks1;

    cout << "Enter second subject marks: ";
    cin >> marks2;

    cout << "Enter third subject marks: ";
    cin >> marks3;

    cout << "Enter fourth subject marks: ";
    cin >> marks4;

    // Calculate total
    total = marks1 + marks2 + marks3 + marks4;

    // Calculate percentage
    per = (float)total / 400 * 100; // assuming each subject is out of 100

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << per << "%" << endl;

    // Determine class obtained
    int x = (int)(per / 10); // Trim fractional part

    switch (x) {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout << "First Class Obtained" << endl;
            break;
        case 5:
            cout << "Second Class Obtained" << endl;
            break;
        case 4:
            cout << "Pass Class Obtained" << endl;
            break;
        default:
            cout << "Student has failed" << endl;
            break;
    }

    return 0;
}
