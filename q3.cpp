#include<iostream>
using namespace std;

int main() {
    int number, originalNumber, sum = 0, digit;

    // Input from the user
    cout << "Enter a number: ";
    cin >> number;

    // Store the original number
    originalNumber = number;

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Check if it's a Niven number
    if (originalNumber % sum == 0) {
        cout << "The number is a Niven number." << endl;
    } else {
        cout << "The number is not a Niven number." << endl;
    }

    return 0;
}
