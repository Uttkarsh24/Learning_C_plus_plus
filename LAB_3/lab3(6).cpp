#include <iostream>
using namespace std;
class rect
{
public:
    int length;
    int breadth;
    void setDim(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getArea()
    {
        return length * breadth;
    }
};
int main()
{
    rect a;
    a.setDim(25, 45);
    cout << "Area:" << a.getArea() << endl;
    return 0;
}