#include <iostream>
using namespace std;

class Employee {
protected:
    int id;
    double salary;
    double da; // Dearness Allowance (20% of salary)

public:
    // Constructor to initialize attributes
    Employee(int empId, double empSalary) {
        id = empId;
        salary = empSalary;
        da = 0.2 * salary; // Calculate DA
    }

    // Method to display employee details
    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Dearness Allowance (DA): $" << da << endl;
    }
};

int main() {
    // Create an array of 25 employees
    const int numEmployees = 25;
    Employee employees[numEmployees];

    // Take user input for each employee
    for (int i = 0; i < numEmployees; ++i) {
        int empId;
        double empSalary;

        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> empId;
        cout << "Salary: $";
        cin >> empSalary;

        employees[i] = Employee(empId, empSalary);
    }

    // Display details for all employees
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; ++i) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].displayDetails();
    }

    return 0;
}

