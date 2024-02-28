#include <iostream>
#include <string>
using namespace std;
void movieInfo(string name, int time = 90)
{
    cout << name << "\n"
         << time << endl;
}
int main()
{
    string name;
    int time;
    getline(cin, name);
    cin >> time;
    movieInfo(name);
}