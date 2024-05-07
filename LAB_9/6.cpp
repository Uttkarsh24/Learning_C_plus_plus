#include <iostream>
#include <fstream>
using namespace std;

bool readIntegersFromFile(const string& fileName, int arr[], int& size) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error opening file '" << fileName << "'.\n";
        return false;
    }
    size = 0;
    int num;
    while (inputFile >> num) {
        arr[size++] = num;
    }
    inputFile.close();
    return true;
}

void mergeSortedArrays(const int arr1[], int size1, const int arr2[], int size2, int mergedArr[], int& mergedSize) {
    int i = 0, j = 0;
    mergedSize = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[mergedSize++] = arr1[i++];
        } else {
            mergedArr[mergedSize++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArr[mergedSize++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[mergedSize++] = arr2[j++];
    }
}

int main() {
    const int maxSize = 100;
    int source1[maxSize], source2[maxSize];
    int size1, size2;

    if (!readIntegersFromFile("Source1.txt", source1, size1) || !readIntegersFromFile("Source2.txt", source2, size2)) {
        cerr << "Exiting due to file read errors.\n";
        return 1;
    }

    sort(source1, source1 + size1);
    sort(source2, source2 + size2);

    int merged[maxSize];
    int mergedSize;
    mergeSortedArrays(source1, size1, source2, size2, merged, mergedSize);

    ofstream targetFile("Target.txt");
    if (!targetFile) {
        cerr << "Error creating output file 'Target.txt'.\n";
        return 1;
    }

    for (int i = 0; i < mergedSize; ++i) {
        targetFile << merged[i] << " ";
    }

    targetFile.close();
    cout << "Merged list written to 'Target.txt'.\n";

    return 0;
}
