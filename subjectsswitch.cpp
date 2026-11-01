#include <iostream>
using namespace std;

int main() {
    int subject;

    cout << "Enter a number (1-3): ";
    cin >> subject;

    switch (subject) {
        case 1:
            cout << "Computer Science";
            break;

        case 2:
            cout << "Software Engineering";
            break;

        case 3:
            cout << "Artificial Inteligence";
            break;

        default:
            cout << "Invalid number";
    }

    return 0;
}

