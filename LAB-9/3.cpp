#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string sourceFileName, targetFileName;
    ifstream sourceFile;
    ofstream targetFile;

    cout << "Enter the source file name: ";
    cin >> sourceFileName;
    cout << "Enter the target file name: ";
    cin >> targetFileName;

    sourceFile.open(sourceFileName);
    if (!sourceFile) {
        cout << "Error opening source file '" << sourceFileName << "'.\n";
        return 1;
    }

    targetFile.open(targetFileName);
    if (!targetFile) {
        cout << "Error opening target file '" << targetFileName << "'.\n";
        sourceFile.close();
        return 1;
    }

    char ch;
    while (sourceFile.get(ch)) {
        targetFile.put(ch);
    }

    sourceFile.close();
    targetFile.close();

    cout << "File copied successfully from '" << sourceFileName << "' to '" << targetFileName << "'.\n";
    return 0;
}
