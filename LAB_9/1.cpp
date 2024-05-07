#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    int line_count = 0, word_count = 0, char_count = 0;

    ofstream myfile("TEXT.txt");
    if (myfile.is_open()) {
        myfile << "Hello, this is a test file.\n";
        myfile << "This file has two lines.\n";
        myfile << "Ok Now Three Lines\n";
        word_count = (myfile.tellp()/4)+1;
        myfile.close();
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }

    ifstream infile("TEXT.txt");
    if (infile.is_open()) {
        while (getline(infile, line)) {
            line_count++;
            char_count += line.length();
        }
        infile.close();
    } else {
        cout << "Unable to open file for reading.\n";
        return 1;
    }

    cout << "Number of lines: " << line_count << "\n";
    cout << "Number of words: " << word_count << "\n";
    cout << "Number of characters: " << char_count << "\n";

    return 0;
}
