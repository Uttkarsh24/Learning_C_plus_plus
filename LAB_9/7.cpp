#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Employee {
    string firstName;
    char middleInitial;
    string lastName;
    unsigned long employeeNumber;
};

void writeEmployeeToFile(const Employee& emp, ofstream& outFile) {
    outFile << emp.firstName << " " << emp.middleInitial << " " << emp.lastName << " " << emp.employeeNumber << endl;
}

void readAndDisplayEmployeeData(const string& fileName) {
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error opening file '" << fileName << "'.\n";
        return;
    }
    Employee emp;
    while (inFile >> emp.firstName >> emp.middleInitial >> emp.lastName >> emp.employeeNumber) {
        cout << "Name: " << emp.firstName << " " << emp.middleInitial << ". " << emp.lastName << ", Employee Number: " << emp.employeeNumber << endl;
    }

    inFile.close();
}

int main() {
    const string fileName = "EmployeeData.txt";
    ofstream outFile(fileName);

    if (!outFile) {
        cerr << "Error creating output file '" << fileName << "'.\n";
        return 1;
    }

    char moreData;
    do {
        Employee emp;
        cout << "Enter first name: ";
        cin >> emp.firstName;
        cout << "Enter middle initial: ";
        cin >> emp.middleInitial;
        cout << "Enter last name: ";
        cin >> emp.lastName;
        cout << "Enter employee number: ";
        cin >> emp.employeeNumber;

        writeEmployeeToFile(emp, outFile);
        cout << "Do you want to enter more data? (y/n): ";
        cin >> moreData;
    } while (moreData == 'y' || moreData == 'Y');

    outFile.close();
    cout << "Data written to file '" << fileName << "'.\n";
    readAndDisplayEmployeeData(fileName);

    return 0;
}
