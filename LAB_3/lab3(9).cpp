#include <iostream>
#include <string>
using namespace std;
class Order
{
private:
    int tableNumber;
    string serverName;
    int numberOfPatrons;
    static const double tableMinimumCharge; // Private static data member
public:
    static void displayTableMinimumCharge();
};
const double Order::tableMinimumCharge = 4.75;
void Order::displayTableMinimumCharge()
{
    Order od;
    cout << "Table Minimum Charge: $" << tableMinimumCharge * od.numberOfPatrons << std::endl;
}
int main()
{
    Order::displayTableMinimumCharge();
    return 0;
}