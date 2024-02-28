#include <iostream>
#include <string>
using namespace std;
struct EnginePart
{
    string serialNumber;
    int yearOfManufacturing;
    string materialType;
    int quantity;
};
int generateRandomYear()
{
    return rand() % 29 + 1990;
}
string generateRandomMaterial()
{
    string materials[3] = {"Steel", "Aluminum", "Iron"};
    return materials[rand() % 3];
}
int generateRandomQuantity()
{
    return rand() % 1000 + 1;
}
int main()
{
    EnginePart parts[60];
    char serialPrefix = 'A';
    int serialSuffix = 0;
    for (int i = 0; i < 60; ++i)
    {
        parts[i].serialNumber = string(1, serialPrefix) + string(1, serialPrefix) +
                                to_string(serialSuffix);
        parts[i].yearOfManufacturing = generateRandomYear();
        parts[i].materialType = generateRandomMaterial();
        parts[i].quantity = generateRandomQuantity();
        serialSuffix++;
        if (serialSuffix == 10)
        {
            serialSuffix = 0;
            serialPrefix++;
        }
    }
    string startSerial = "BB1";
    string endSerial = "CC6";
    cout << "Parts within serial range [" << startSerial << ", " << endSerial << "]:" << endl;
    for (int i = 0; i < 60; ++i)
    {
        if (parts[i].serialNumber >= startSerial && parts[i].serialNumber <= endSerial)
        {
            cout << "Serial Number: " << parts[i].serialNumber << ", Year of Manufacturing: "
                 << parts[i].yearOfManufacturing
                 << ", Material Type: " << parts[i].materialType << ", Quantity: " << parts[i].quantity << endl;
        }
    }
    return 0;
}