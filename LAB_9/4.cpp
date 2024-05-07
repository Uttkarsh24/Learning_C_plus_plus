#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;

    ofstream myfile("ONE.txt");
    if (myfile.is_open()) {
        myfile << "file - 1";
        myfile.close();
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }
    ofstream myfile2("TWO.txt");
    if (myfile2.is_open()) {
        myfile2 << "file - 2";
        myfile2.close();
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }

    ofstream myfile3("THREE.txt");

    ifstream infile1("ONE.txt");
    ifstream infile2("TWO.txt");

    if (myfile3.is_open()) {
        if (infile1.is_open()) {
            while (getline(infile1, line)) {
                myfile3 << line;
            }
            infile1.close();
            myfile3 << "\n";
        } else {
            cout << "Unable to open file for reading.\n";
            return 1;
        }
        if (infile2.is_open()) {
            while (getline(infile2, line)) {
                myfile3 << line;
            }
            infile2.close();
            myfile3 << "\n";
        } else {
            cout << "Unable to open file for reading.\n";
            return 1;
        }
        myfile3.close();
    } else {
        cout << "Unable to open the file\n";
        return 1;
    }

    cout << "FILE MERGED TO THREE.txt!" << endl;
}
