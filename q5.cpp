#include <iostream>
#include <string>

using namespace std;

// Employee structure
struct Employee {
    string employeeID;
    string name;
    float overtimeFee;
    int otHours[5]; // Array to store overtime hours for 5 weekdays
};

// Function to get employee details
Employee getEmp(Employee e) {
    cout << "Enter Employee ID: ";
    getline(cin, e.employeeID);

    cout << "Enter the Name of the Employee: ";
    getline(cin, e.name);

    cout << "Enter the Over-time Fee: ";
    cin >> e.overtimeFee;

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Enter the number of OT Hours for Day " << (i + 1) << ": ";
        cin >> e.otHours[i];
    }

    return e;
}

// Function to calculate overtime payment
void calOTpayment(float overtimeFee, int otHours[], int size) {
    int totalOTHours = 0;
    int totalOTFee = 0;

    for (int i = 0; i < size; ++i) {
        totalOTHours += otHours[i];
    }

    totalOTFee = totalOTHours * overtimeFee;

    cout << "Total Over Time Payment: " << totalOTFee << endl;
}


int main() {
    // Create Employee object
    Employee emp;

    // Call getEmp() to get employee details
    emp = getEmp(emp);

    cout << endl;

    // Call calOTpayment() to calculate and print overtime payment
    calOTpayment(emp.overtimeFee, emp.otHours, 5);

    // Update overtimeFee using pointers dynamically
    float* ptrOvertimeFee = &emp.overtimeFee;
    *ptrOvertimeFee = 600.00;

    // Print the updated overtimeFee
    cout << "The new overtime fee is: " << emp.overtimeFee << endl;

    return 0;
}
