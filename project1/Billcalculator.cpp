#include <iostream>
using namespace std;

int main() {
    int units;
    int totalBill = 0;
    
    cout << "Enter the total units: ";
    cin >> units;

    if (units < 0) {
        cout << "Error:." << endl;
    } 
    else if (units <= 100) {
        totalBill = units * 10;
        cout << "Total Bill= " << totalBill << endl;
    } 
    
    else if (units <= 200) {
        totalBill = units * 15;
        cout << "Total Bil= " << totalBill << endl;
    } 

    else {
        totalBill = units * 20;
        cout << "Total Bill= " << totalBill << endl;
    }

    return 0;
}
