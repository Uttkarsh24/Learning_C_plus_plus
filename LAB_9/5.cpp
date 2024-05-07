#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void encryptDecryptFile(const string& fileName, bool encrypt) {
    ifstream inputFile;
    ofstream outputFile;
    string outputFileName = encrypt ? "encrypted_" + fileName : "decrypted_" + fileName;

    inputFile.open(fileName);
    if (!inputFile) {
        cout << "Error opening input file '" << fileName << "'.\n";
        return;
    }

    outputFile.open(outputFileName);
    if (!outputFile) {
        cout << "Error creating output file '" << outputFileName << "'.\n";
        inputFile.close();
        return;
    }

    const char xorKey = 'K';

    char ch;
    while (inputFile.get(ch)) {
        if (encrypt) {
            ch = ch ^ xorKey;
        } else {
            ch = ch ^ xorKey;
        }
        outputFile.put(ch);
    }

    inputFile.close();
    outputFile.close();

    cout << (encrypt ? "File encrypted" : "File decrypted") << " successfully.\n";
}

int main() {
    string fileName;
    char choice;

    cout << "Enter the file name: ";
    cin >> fileName;

    cout << "Choose an option:\n";
    cout << "1. Encrypt the file\n";
    cout << "2. Decrypt the file\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case '1':
            encryptDecryptFile(fileName, true);
            break;
        case '2':
            encryptDecryptFile(fileName, false);
            break;
        default:
            cout << "Invalid choice. Please enter 1 or 2.\n";
            break;
    }

    return 0;
}
