#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number (power of 2) to find n for 2^n: ";
    cin >> number;

    int n = 0;

    // Check if the number is a power of 2 using bitwise AND
    if ((number & (number - 1)) != 0 || number <= 0) {
        cout << "The given number is not a power of 2." << endl;
        return 0;
    }

    // Loop to determine n using right shift
    while (number > 1) {
        number >>= 1; // Right shift (equivalent to dividing by 2)
        n++;
    }

    cout << "The value of n for 2^n is: " << n << endl;
    return 0;
}
