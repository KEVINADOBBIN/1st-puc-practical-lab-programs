#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Input any character: ";
    cin >> ch;

    // Check for uppercase
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an Uppercase Alphabet." << endl;
    }
    // Check for lowercase
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Lowercase Alphabet." << endl;
    }
    // Not an alphabet
    else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
