#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line_input;
    string line[100];
    int n=0;

    ofstream ofile("HELLO.txt");
    if (ofile.is_open()) {
        ofile << "Hello I am Uttkarsh.\n";
        ofile << "I am valorant player.";
        ofile.close();
    } else {
        cout << "Unable to open the file" << endl;
        return 1;
    }

    ifstream ifile("HELLO.txt");
    if (ifile.is_open()) {
        while (getline(ifile, line_input)) {
            line[n] = line_input;
            n++;
        }
        ifile.close();
    } else {
        cout << "Unable to open the file" << endl;
        return 1;
    }

    for (int i=0;i<n;i++) {
        cout << line[i] << endl;
    }
}
